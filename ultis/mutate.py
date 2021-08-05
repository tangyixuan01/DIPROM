from config import *
from ultis.file_handle import read_coverage


def run_cmd_save_errorInformation(cmd, writepath):
    result_str = ''
    # process = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    process = subprocess.Popen(cmd, shell=True, stderr=subprocess.PIPE)
    error_f = process.stderr
    errors = error_f.read()
    # print(errors)
    if errors:
        result_str = errors
    if error_f:
        error_f.close()
    f = open(writepath, 'wb+')
    f.write(result_str)
    f.close()


def timeout(cmd):
    """call shell-command and either return its output or kill it
        if it doesn't normally exit within timeout seconds and return None"""
    start = datetime.datetime.now()
    process = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE)
    #	while process.poll() is None:
    #		time.sleep(0.2)
    #		now = datetime.datetime.now()
    #		if (now - start).seconds > 5:
    #			os.kill(process.pid, signal.SIGKILL)
    #			os.waitpid(-1, os.WNOHANG)
    #			return None
    return process.stdout.readlines()



def coverage_lines(deletecodecoverage):
    path = pypath + 'comparecoverage/'
    begin_index = 0
    nondeletecode = []
    for parent, dirnames, filenames in os.walk(path):
        for filename in filenames:
            nondeletecode = read_coverage(path + filename)
    if len(deletecodecoverage) > 1:
        for a in range(0, len(nondeletecode)):
            if ''.join(deletecodecoverage[0].split()) in ''.join(nondeletecode[a].split()) and ''.join(
                    deletecodecoverage[1].split()) in ''.join(nondeletecode[a + 1].split()):
                flagcoverage = True
                begin_index = a
                break
    else:
        for a in range(0, len(nondeletecode)):
            if ''.join(
                    deletecodecoverage[0].split()) in ''.join(
                    nondeletecode[a].split()):
                flagcoverage = True
                begin_index = a
                break
    end_index = begin_index + len(deletecodecoverage) - 1
    return begin_index, end_index


def rankposition(raterule, averagedistance, presententrule):
    sumd = 0
    rr1 = {}
    for key in raterule:
        # print(key + ':' + str(raterule[key]))
        rr1[key] = raterule[key]
        sumd = sumd + raterule[key]
    for key in rr1:
        rr1[key] = averagedistance * (1.0 - float(rr1[key] / sumd))
    after = sorted(rr1.items(), key=lambda item: item[1])  # increasement
    positiona = 0
    for i in range(0, len(after)):
        if after[i][0] in a:
            positiona = i + 1
    return positiona


def calculatescore(raterule, averagedistance, a):
    sumd = 0
    for key in raterule:
        # print(key + ':' + str(raterule[key]))
        sumd = sumd + raterule[key]

    ascore = averagedistance * (1.0 - float(raterule[a] / sumd))

    return ascore



def codedistance1(path1, path2):
    codewithblank1 = read_coverage(path1)
    codewithblank2 = read_coverage(path2)
    distance = 0.0
    chaji = list(set(codewithblank1) ^ set(codewithblank2))
    bingji = list(set(codewithblank1).union(set(codewithblank2)))
    distance = float(len(chaji) / len(bingji))
    return distance



def coverage(deletecodecoverage):
    path = pypath + 'comparecoverage/'
    nondeletecode = []
    for parent, dirnames, filenames in os.walk(path):
        for filename in filenames:
            nondeletecode = read_coverage(path + filename)
    flagcoverage = False
    codecompile = re.compile("[^a-z^A-Z^0-9]")
    if len(deletecodecoverage) > 0:
        if len(nondeletecode) > 0:
            for a in range(0, len(nondeletecode)):
                if codecompile.sub(
                        '', deletecodecoverage[0]) in codecompile.sub(
                        '', nondeletecode[a]):
                    flagcoverage = True
                    break
    return flagcoverage


def constructCFG(cpath):
    #print('-----begin construct CFG-----')
    # print(cpath)
    cmdcfg = 'gcc -c -fdump-tree-cfg-lineno ' + cpath
    s = os.popen(cmdcfg)
    s.close()
    #print('-----end construct CFG-----')


def compiledbygcc(cpath, compilationpath):
    warning = "-Wall -Wextra -pedantic -Wabi -Waddress -Waggregate-return -Waggressive-loop-optimizations -Warray-bounds -Wattributes -Wbad-function-cast -Wbuiltin-macro-redefined -Wcast-align -Wcast-qual -Wchar-subscripts -Wclobbered -Wcomment -Wcomments -Wconversion -Wcoverage-mismatch -Wcpp -Wdeclaration-after-statement -Wdeprecated -Wdeprecated-declarations -Wdisabled-optimization -Wdiv-by-zero -Wdouble-promotion -Wempty-body -Wendif-labels -Wenum-compare -Werror-implicit-function-declaration -Wfloat-equal -Wformat -Wformat-contains-nul -Wformat-extra-args -Wformat-nonliteral -Wformat-security -Wformat-y2k -Wformat-zero-length -Wfree-nonheap-object -Wignored-qualifiers -Wimplicit -Wimplicit-function-declaration -Wimplicit-int -Winit-self -Winline -Wint-to-pointer-cast -Winvalid-memory-model -Winvalid-pch -Wjump-misses-init -Wlogical-op -Wlong-long -Wmain -Wmaybe-uninitialized -Wmissing-braces -Wmissing-declarations -Wmissing-field-initializers -Wmissing-include-dirs -Wmissing-parameter-type -Wmissing-prototypes -Wmudflap -Wmultichar -Wnarrowing -Wnested-externs -Wnonnull -Wnormalized=id -Wnormalized=nfc -Wnormalized=nfkc -Wold-style-declaration -Wold-style-definition -Woverflow -Woverlength-strings -Woverride-init -Wpacked -Wpacked-bitfield-compat -Wpadded -Wparentheses -Wpedantic -Wpointer-arith -Wpointer-sign -Wpointer-to-int-cast -Wpragmas -Wredundant-decls -Wreturn-local-addr -Wreturn-type -Wsequence-point -Wshadow -Wsign-compare -Wsizeof-pointer-memaccess -Wstack-protector -Wstrict-aliasing -Wstrict-overflow -Wstrict-prototypes -Wsuggest-attribute=const -Wsuggest-attribute=format -Wsuggest-attribute=noreturn -Wsuggest-attribute=pure -Wswitch -Wswitch-default -Wswitch-enum -Wsync-nand -Wsystem-headers -Wtraditional -Wtraditional-conversion -Wtrampolines -Wtrigraphs -Wtype-limits -Wundef -Wuninitialized -Wunknown-pragmas -Wunsafe-loop-optimizations -Wunsuffixed-float-constants -Wunused -Wunused-but-set-parameter -Wunused-but-set-variable -Wunused-function -Wunused-label -Wunused-local-typedefs -Wunused-macros -Wunused-parameter -Wunused-result -Wunused-value -Wunused-variable -Wvarargs -Wvariadic-macros -Wvector-operation-performance -Wvla -Wvolatile-register-var -Wwrite-strings "
    cmd2 = 'timeout 30 /usr/bin/gcc-4.8 -c ' + warning + cpath
    run_cmd_save_errorInformation(cmd2, compilationpath)


def compiledbyclang(cpath, compilationpath):
    cmd1 = 'timeout 30 /usr/bin/clang-3.6 -c -Weverything -pedantic -ferror-limit=0 ' + cpath
    run_cmd_save_errorInformation(cmd1, compilationpath)


def replacenamefunc(codetype):
    global variablelist
    global selectfunctionfile
    print('-----ready to insert ')
    # insert the function
    filenamelist0 = os.listdir(codesnippetpath + codetype + '/')
    filenamelist = []
    for f in range(0, len(filenamelist0)):
        if filenamelist0[f].endswith('.c'):
            filenamelist.append(filenamelist0[f])
    sample = random.sample(filenamelist, 1)
    samplepath = codesnippetpath + codetype + '/' + sample[0]
    selectfunctionfile = samplepath
    print('selectfunctionfile:' + selectfunctionfile)
    print('----------insert ' + codetype + ' : ' + sample[0])
    samplecode = read_coverage(samplepath)
    # whetherreplace = samplecode[1][2:].strip()
    whetherreplace = samplecode[1].strip()
    renamemapingreturn = []
    renamemapingpara = []
    renamemapingfunc = ''
    return_type = ''
    function_name = ''
    if whetherreplace != '':
        # namelist[0]:return_type function_name namelist[1]:paralist
        namelist = re.split('[()]', whetherreplace)
        suitablename = []
        if len(namelist) != 0:
            # return variable searching
            if namelist[0] != '':
                # namelist[0]:return_type function_name
                nameandtype = namelist[0].split(' ')
                for index_types in range(0, len(nameandtype) - 1):
                    return_type += nameandtype[index_types]
                function_name = nameandtype[-1]
                renamemapingfunc = 'insert_' + function_name


            if namelist[1] != '':
                paratype = namelist[1].split(',')
                # local variable first
                for keyparatype in paratype:
                    paratype = keyparatype.strip().split(' ')[0]
                    paraname = keyparatype.strip().split(' ')[1]
                    if paratype == 'void':
                        break
                    else:
                        for variable in variablelist:
                            subvariablelist = variable.split('_')
                            if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                            ) and subvariablelist[1].isdigit():
                                replace_type_list = variablelist[variable].split(
                                    ' ')
                                if paratype == replace_type_list[-1]:
                                    suitablename.append(variable)
                        if len(suitablename) != 0:
                            if len(suitablename) == 1:
                                renamemapingpara.append(suitablename[0])
                            else:
                                selectname = random.randint(
                                    0, len(suitablename) - 1)
                                renamemapingpara.append(
                                    suitablename[selectname])
                            suitablename = []
                        # global variable later
                        else:
                            for variable in global_variable:
                                replace_type_list = global_variable[variable].split(
                                    ' ')
                                if paratype == replace_type_list[-1]:
                                    suitablename.append(variable)
                            if len(suitablename) != 0:
                                if len(suitablename) == 1:
                                    renamemapingpara.append(suitablename[0])
                                else:
                                    selectname = random.randint(
                                        0, len(suitablename) - 1)
                                    renamemapingpara.append(
                                        suitablename[selectname])
                                suitablename = []
                            else:
                                # large the type scope
                                for variable in variablelist:
                                    subvariablelist = variable.split('_')
                                    if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                    ) and subvariablelist[1].isdigit():
                                        if paratype in variablelist[variable]:
                                            suitablename.append(variable)
                                if len(suitablename) != 0:
                                    if len(suitablename) == 1:
                                        renamemapingpara.append(
                                            suitablename[0])
                                    else:
                                        selectname = random.randint(
                                            0, len(suitablename) - 1)
                                        renamemapingpara.append(
                                            suitablename[selectname])
                                    suitablename = []
                                # global variable later
                                else:
                                    for variable in global_variable:
                                        if paratype in global_variable[variable]:
                                            suitablename.append(variable)
                                    if len(suitablename) != 0:
                                        if len(suitablename) == 1:
                                            renamemapingpara.append(
                                                suitablename[0])
                                        else:
                                            selectname = random.randint(
                                                0, len(suitablename) - 1)
                                            renamemapingpara.append(
                                                suitablename[selectname])
                                        suitablename = []
                                    else:
                                        renamemapingpara.append(
                                            paratype + '(0)')
    paralist = ''
    if len(renamemapingpara) > 0:
        if len(renamemapingpara) == 1:
            paralist = renamemapingpara[0]
        else:
            for indexrenamemapingpara in range(0, len(renamemapingpara) - 1):
                paralist = paralist + \
                    renamemapingpara[indexrenamemapingpara] + ','
            paralist = paralist + renamemapingpara[len(renamemapingpara) - 1]
    funcrefcode = ''
    if len(renamemapingreturn) == 0:
        funcrefcode = renamemapingfunc + '(' + paralist + ');'
    #else:
    #    funcrefcode = renamemapingreturn[0]+'='+renamemapingfunc+'('+paralist+');'
    variablelist = {}
    return funcrefcode


def replacenamefunc_name():
    global variablelist
    global selectfunctionfile
    print('///////////selectfunctionfile:' + selectfunctionfile)
    samplecode1 = read_coverage(selectfunctionfile)
    samplecode = []
    # rename function name
    functionnameline = samplecode1[1].strip()
    # namelist[0]:return_type function_name namelist[1]:paralist
    namelist = re.split('\\(|\\)', functionnameline)
    functionnamelist = namelist[0].split(' ')
    functionname = functionnamelist[-1]
    for keysamplecode1 in samplecode1:
        renamekeysamplecode1 = keysamplecode1
        if functionname in keysamplecode1:
            renamekeysamplecode1 = renamekeysamplecode1.replace(
                functionname, 'insert_' + functionname)
        samplecode.append(renamekeysamplecode1)

    whetherreplace = samplecode[0][2:].strip()
    renamemaping = {}
    if whetherreplace != '':
        namelist = whetherreplace.split('  ')
        suitablename = []
        if len(namelist) != 0:
            for h in range(0, len(namelist)):
                if namelist[h] != '':
                    nameandtype = namelist[h].split(':')
                    name = nameandtype[0]
                    typelist = nameandtype[1].split(' ')
                    if name.startswith('func_') or name.startswith('loop_'):
                        #print('..........' + nameandtype[1])
                        #print(',,,,,,,,,,' + str(global_function))
                        for funckey in global_function:
                            if typelist[-1] == str(global_function[funckey]):
                                suitablename.append(funckey)
                        if len(suitablename) != 0:
                            if len(suitablename) == 1:
                                renamemaping[name] = suitablename[0]
                            else:
                                selectname = random.randint(
                                    0, len(suitablename) - 1)
                                renamemaping[name] = suitablename[selectname]
                            suitablename = []
                        else:
                            print('-----no suitable function name-----')
                            samplecode = []
                            renamemaping = {}
                            break

                    else:
                        for variable in global_variable:
                            subvariablelist = variable.split('_')
                            if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                            ) and subvariablelist[1].isdigit():
                                replace_type_list = global_variable[variable].split(
                                    ' ')
                                if typelist[-1] == replace_type_list[-1]:
                                    suitablename.append(variable)
                        if len(suitablename) != 0:
                            if len(suitablename) == 1:
                                renamemaping[name] = suitablename[0]
                            else:
                                selectname = random.randint(
                                    0, len(suitablename) - 1)
                                renamemaping[name] = suitablename[selectname]
                            suitablename = []
                        else:
                            # large the type scope
                            for variable in global_variable:
                                subvariablelist = variable.split('_')
                                if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                ) and subvariablelist[1].isdigit():
                                    if typelist[-1] in global_variable[variable]:
                                        suitablename.append(variable)
                            if len(suitablename) != 0:
                                if len(suitablename) == 1:
                                    renamemaping[name] = suitablename[0]
                                else:
                                    selectname = random.randint(
                                        0, len(suitablename) - 1)
                                    renamemaping[name] = suitablename[selectname]
                                suitablename = []
                            else:
                                renamemaping[name] = typelist[-1] + '(0)'

    renamesamplecode = []
    if len(renamemaping) != 0:
        # replace name
        renamesamplecode.append(samplecode[1])
        for r in range(2, len(samplecode)):
            rename_eachline = ''
            samplecodelist = re.split('([();&* ])', samplecode[r])
            for key in renamemaping:
                for index_samplecodelist in range(len(samplecodelist)):
                    if key == samplecodelist[index_samplecodelist]:
                        samplecodelist[index_samplecodelist] = renamemaping[key]
            for index_samplecodelist1 in range(len(samplecodelist)):
                rename_eachline += samplecodelist[index_samplecodelist1]
            renamesamplecode.append(rename_eachline)
    variablelist = {}
    return renamesamplecode


def replacename(codetype):
    global variablelist
    print('-----ready to insert ')
    # insert the function
    filenamelist0 = os.listdir(codesnippetpath + codetype + '/')
    filenamelist = []
    for f in range(0, len(filenamelist0)):
        if filenamelist0[f].endswith('.c'):
            filenamelist.append(filenamelist0[f])
    # print(codesnippetpath+codetype+'/')
    # print('filenamelist' + str(len(filenamelist)))
    countwhile = 0
    while True:
        countwhile += 1
        if countwhile > 5:
            break
        sample = random.sample(filenamelist, 1)
        # print(str(sample))
        # print(str(sample[0]))
        samplepath = codesnippetpath + codetype + '/' + sample[0]
        print('----------insert ' + codetype + ' : ' + sample[0])
        samplecode = read_coverage(samplepath)
        # for i in range(0,len(samplecode)):
        #	print(samplecode[i])
        # insert::rename the function name
        whetherreplace = samplecode[0][2:].strip()
        renamemaping = {}
        if whetherreplace != '':
            namelist = whetherreplace.split('  ')
            suitablename = []
            if len(namelist) != 0:
                for h in range(0, len(namelist)):
                    if namelist[h] != '':
                        nameandtype = namelist[h].split(':')
                        name = nameandtype[0]
                        typelist = nameandtype[1].split(' ')
                        if nameandtype[1] == 'int':
                            samplecode.insert(1, 'int ' + nameandtype[0] + ';')
                        elif name.startswith('func_'):
                            for funckey in global_function:
                                # print('=============global_function====='+funckey+'======'+str(global_function[funckey]))
                                if typelist[-1] in str(global_function[funckey]):
                                    suitablename.append(funckey)
                            if len(suitablename) != 0:
                                if len(suitablename) == 1:
                                    renamemaping[nameandtype[0]
                                                 ] = suitablename[0]
                                else:
                                    selectname = random.randint(
                                        0, len(suitablename) - 1)
                                    renamemaping[nameandtype[0]
                                                 ] = suitablename[selectname]
                                suitablename = []
                            else:
                                print(
                                    '!!!!!!!!!!!!!!!!!!retry again!!!!!!!!!!!!!!!!!!!!!!')
                                renamemaping = {}
                                break
                        else:
                            # print(str(variablelist))
                            # local variable first
                            for variable in variablelist:
                                subvariablelist = variable.split('_')
                                if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                ) and subvariablelist[1].isdigit():
                                    replace_type_list = variablelist[variable].split(
                                        ' ')
                                    if typelist[-1] == replace_type_list[-1]:
                                        suitablename.append(variable)
                            if len(suitablename) != 0:
                                if len(suitablename) == 1:
                                    renamemaping[nameandtype[0]
                                                 ] = suitablename[0]
                                else:
                                    selectname = random.randint(
                                        0, len(suitablename) - 1)
                                    if '[' in nameandtype[0]:
                                        renamemaping[nameandtype[0]] = suitablename[selectname] + \
                                            nameandtype[0][nameandtype[0].index('['):]
                                    else:
                                        renamemaping[nameandtype[0]
                                                     ] = suitablename[selectname]
                                suitablename = []
                            # global variable later
                            else:
                                for variable in global_variable:
                                    subvariablelist = variable.split('_')
                                    if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                    ) and subvariablelist[1].isdigit():
                                        replace_type_list = global_variable[variable].split(
                                            ' ')
                                        if typelist[-1] == replace_type_list[-1]:
                                            suitablename.append(variable)
                                if len(suitablename) != 0:
                                    if len(suitablename) == 1:
                                        renamemaping[nameandtype[0]
                                                     ] = suitablename[0]
                                    else:
                                        selectname = random.randint(
                                            0, len(suitablename) - 1)
                                        if '[' in nameandtype[0]:
                                            renamemaping[nameandtype[0]] = suitablename[selectname] + \
                                                nameandtype[0][nameandtype[0].index('['):]
                                        else:
                                            renamemaping[nameandtype[0]
                                                         ] = suitablename[selectname]
                                    suitablename = []
                                else:
                                    # large the type, local first
                                    for variable in variablelist:
                                        subvariablelist = variable.split('_')
                                        if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                        ) and subvariablelist[1].isdigit():
                                            if typelist[-1] in variablelist[variable]:
                                                suitablename.append(variable)
                                    if len(suitablename) != 0:
                                        if len(suitablename) == 1:
                                            renamemaping[nameandtype[0]
                                                         ] = suitablename[0]
                                        else:
                                            selectname = random.randint(
                                                0, len(suitablename) - 1)
                                            if '[' in nameandtype[0]:
                                                renamemaping[nameandtype[0]] = suitablename[selectname] + \
                                                    nameandtype[0][nameandtype[0].index('['):]
                                            else:
                                                renamemaping[nameandtype[0]
                                                             ] = suitablename[selectname]
                                        suitablename = []
                                    # global variable later
                                    else:
                                        for variable in global_variable:
                                            subvariablelist = variable.split(
                                                '_')
                                            if len(subvariablelist) == 2 and subvariablelist[0].isalpha(
                                            ) and subvariablelist[1].isdigit():
                                                if typelist[-1] in global_variable[variable]:
                                                    suitablename.append(
                                                        variable)
                                        if len(suitablename) != 0:
                                            if len(suitablename) == 1:
                                                renamemaping[nameandtype[0]
                                                             ] = suitablename[0]
                                            else:
                                                selectname = random.randint(
                                                    0, len(suitablename) - 1)
                                                if '[' in nameandtype[0]:
                                                    renamemaping[nameandtype[0]] = suitablename[selectname] + \
                                                        nameandtype[0][nameandtype[0].index('['):]
                                                else:
                                                    renamemaping[nameandtype[0]
                                                                 ] = suitablename[selectname]
                                            suitablename = []
                                        else:
                                            print(
                                                '!!!!!!!!!!!!!!!!!!retry again!!!!!!!!!!!!!!!!!!!!!!')
                                            renamemaping = {}
                                            break
            if len(renamemaping) != 0:
                break
        else:
            break
    renamesamplecode = []
    if len(renamemaping) != 0:
        # replace name
        for r in range(1, len(samplecode)):
            rename_eachline = ''
            samplecodelist = re.split('([();&* ])', samplecode[r])
            for key in renamemaping:
                for index_samplecodelist in range(len(samplecodelist)):
                    if key == samplecodelist[index_samplecodelist]:
                        samplecodelist[index_samplecodelist] = renamemaping[key]
            for index_samplecodelist1 in range(len(samplecodelist)):
                rename_eachline += samplecodelist[index_samplecodelist1]
            renamesamplecode.append(rename_eachline)
        return renamesamplecode
    elif countwhile <= 5:
        return samplecode
    else:
        return []


def selectinsertlocal(deletelistcodeline):
    rangelooplist = [[]]
    countblankbegin = 0

    beginline = 0
    endline = 0
    selectlocalloop = 0
    flagloop = False
    for indexeachlinecode in range(0, len(deletelistcodeline)):
        eachlinecode = deletelistcodeline[indexeachlinecode].replace(' ', '')
        if eachlinecode.startswith('for') or eachlinecode.startswith(
                'while') or eachlinecode.startswith('do') or eachlinecode.startswith('switch'):
            flagloop = True
            beginline = indexeachlinecode
            for t in range(0, len(deletelistcodeline[indexeachlinecode])):
                if deletelistcodeline[indexeachlinecode][t] == ' ':
                    countblankbegin += 1
                else:
                    break
            break
    if flagloop:
        for indexeachlinecodeend in range(
                beginline + 2, len(deletelistcodeline)):
            eachlinecode = deletelistcodeline[indexeachlinecodeend]
            countblankend = 0
            if eachlinecode.replace(' ', '') != '':
                for t in range(0, len(eachlinecode)):
                    if eachlinecode[t] == ' ':
                        countblankend += 1
                    else:
                        break
                if countblankend == countblankbegin:
                    endline = indexeachlinecodeend
                    break

        sizeloopbegin = beginline + 2
        sizeloopend = endline - 1
        sizeselectloop = sizeloopend - sizeloopbegin
        if sizeselectloop == 0:
            selectlocalloop = sizeloopbegin

        else:
            while True:
                selectlocalloop = random.randint(sizeloopbegin, sizeloopend)
                if deletelistcodeline[selectlocalloop].replace(
                        ' ', '') != '{' and deletelistcodeline[selectlocalloop].replace(
                        ' ', '') != '}' and deletelistcodeline[selectlocalloop].replace(
                        ' ', '') != '':
                    break
                else:
                    selectlocalloop = random.randint(
                        sizeloopbegin, sizeloopend)

    return selectlocalloop
