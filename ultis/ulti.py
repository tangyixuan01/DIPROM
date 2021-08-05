from config import *
from main import extract_globle_code
from ultis.file_handle import *
from ultis.mutate import *
from ultis.test_gcc_clang import *


def astMoveAnnotation(filepath,
                      parse_cmd,
                      pypath,
                      count0):
    ast = parse_file(filepath, use_cpp=True, cpp_path='gcc', cpp_args=[
        '-E', r'' + parse_cmd])
    rewritepath0 = pypath + 'testcases2/test' + str(count0) + '.c'
    generator1 = c_generator.CGenerator()
    f11 = open(rewritepath0, 'w+')
    f11.write(str(generator1.visit(ast)))
    f11.close()
    del ast
    rewritepath1 = pypath + 'test' + str(count0) + '.c'
    read_write_testcase(rewritepath0, rewritepath1)
    return rewritepath1, generator1


def compileTestCase(pypath, count0):
    coverageconfirm = timeout('timeout 5 ./test.sh test' + str(count0))
    if bool(1 - os.path.exists(pypath + 'test' + str(count0) + '.c.gcov')):
        if os.path.exists(pypath + 'test' + str(count0) + '.c'):
            os.remove(pypath + 'test' + str(count0) + '.c')
        if os.path.exists(pypath + 'test' + str(count0)):
            os.remove(pypath + 'test' + str(count0))
        if os.path.exists(pypath + 'test' + str(count0) + '.gcno'):
            os.remove(pypath + 'test' + str(count0) + '.gcno')
        if os.path.exists(pypath + 'testcases2/test' + str(count0) + '.c'):
            os.remove(pypath + 'testcases2/test' + str(count0) + '.c')
        return True
    return False


def delDeadCode(filecoverage, ):
    afterdelete = []
    lenfi = len(filecoverage)
    a = 0
    hang = 0
    for a in range(0, len(filecoverage)):
        if hang != len(filecoverage) - 1:
            if a > hang:
                if filecoverage[a] != '':
                    line = filecoverage[a].split(':')
                    if int(line[1].strip()) > 0:
                        if a != len(filecoverage) - 1:
                            linenext = filecoverage[a + 1].split(':')
                            # delete dead code
                            if line[0].strip(
                            ) == '#####' and linenext[2].strip() == '{':
                                hang = read_specific(a + 1, filecoverage)
                            elif line[0].strip() == '#####' and linenext[2].strip() != '{' and 'goto' not in line[
                                2].strip():
                                a = a + 1
                            elif line[0].strip() == '-' and 'else' in line[2].strip() and linenext[
                                2].strip() == '{':
                                hang = read_specific(a + 1, filecoverage)
                            elif line[2].strip().startswith('lbl_'):
                                a = a + 1
                            else:
                                prex = len(line[0]) + len(line[1]) + 2
                                afterdelete.append(filecoverage[a][prex:])
                        else:
                            prex = len(line[0]) + len(line[1]) + 2
                            afterdelete.append(filecoverage[a][prex:])
        else:
            break
    return afterdelete


def delAfterIf(afterdelete, ):
    dic1 = {}
    for k in range(0, len(afterdelete)):
        if afterdelete[k].startswith(
                'static') and 'func_' in afterdelete[k]:
            function = afterdelete[k][0:afterdelete[k].find('(')]
            if dic1 and function in dic1.keys():
                value1 = dic1[function] + 1
                dic1[function] = value1
            else:
                dic1[function] = 1
    afterdelete1 = []
    for gg in range(0, len(afterdelete)):
        afterdelete1.append(afterdelete[gg])
    if dic1:
        for key in dic1:
            if dic1[key] == 1:
                for ll in range(0, len(afterdelete)):
                    if key in afterdelete[ll]:
                        for hh in range(0, len(afterdelete1)):
                            deletes = key + '('
                            if deletes in afterdelete1[hh]:
                                del afterdelete1[hh]
                                break
    for p in range(0, len(afterdelete1)):
        if 'if' in afterdelete1[p] and '{' not in afterdelete1[p + 1]:
            listifelse = []
            for q in range(p + 1, len(afterdelete1)):
                if len(afterdelete1[q].strip()) != 0:
                    if 'else' in afterdelete1[q].strip():
                        break
                    else:
                        listifelse.append(afterdelete1[q])
            if len(listifelse) != 1:
                afterdelete1[p] = afterdelete1[p].replace('\n', ';\n')
    afterdelete2 = []
    for ss in range(0, len(afterdelete1)):
        afterdelete2.append(afterdelete1[ss])
    return afterdelete2


def delCoverageFile(rewritepath1, pypath, count0):
    if os.path.exists(rewritepath1):
        os.remove(rewritepath1)
    if os.path.exists(pypath + 'test' + str(count0) + '.c.gcov'):
        os.remove(pypath + 'test' + str(count0) + '.c.gcov')


def delOriTestCase(pypath, count0):
    if os.path.exists(pypath + 'testcases2/test' + str(count0) + '.c'):
        os.remove(pypath + 'testcases2/test' + str(count0) + '.c')
    if os.path.exists(pypath + 'outdead/test' + str(count0) + '.c'):
        os.remove(pypath + 'outdead/test' + str(count0) + '.c')


def create_necessary_folder(dir_path):
    if not os.path.exists(dir_path):
        os.makedirs(dir_path)

def compileFile(resultpath,
                testcase,
                pypath,
                count0,
                delatefilepathlist):
    rewritepath4 = resultpath + 'newvariantgcc1/' + \
                   testcase + '-' + str(0) + '.c'
    rewritepath44 = pypath + 'comparecoverage/'
    delatefilepathlist.add(rewritepath44 + 'test' + str(count0) + '.c')
    shutil.copy(
        pypath +
        'outdead1/test' +
        str(count0) +
        '.c',
        rewritepath44)
    shutil.move(
        pypath +
        'outdead1/test' +
        str(count0) +
        '.c',
        rewritepath4)
    return rewritepath4


def compileOriFile(resultpath,
                   count0,
                   rewritepath4,
                   gcc_or_clang
                   ):
    tempcompilationgcc = resultpath + \
                         'tempcompilationgccclang/test' + str(count0) + '.c' + 'gcc.txt'
    tempcompilationclang = resultpath + \
                           'tempcompilationgccclang/test' + str(count0) + '.c' + 'clang.txt'
    # if args[1] == gcc_ccs:
    if gcc_or_clang == 'gcc_ccs':
        testGccByCcs(rewritepath4, tempcompilationgcc)
        referenceClangByCcs(rewritepath4, tempcompilationclang)

    # if args[1] == cvs
    elif gcc_or_clang == 'gcc_cvs':
        testGccByCvs(rewritepath4, tempcompilationgcc)
        referenceGccByCvs(rewritepath4, tempcompilationclang)

    # if args[1] == cos
    elif gcc_or_clang == 'gcc_cos':
        testGccByCos(rewritepath4, tempcompilationgcc)
        referenceGccByCos(rewritepath4, tempcompilationclang)

    # if args[1] == clang_ccs
    elif gcc_or_clang == 'clang_ccs':
        testClangByCcs(rewritepath4, tempcompilationgcc)
        referenceGccByCcs(rewritepath4, tempcompilationclang)

    # if args[1] == clang_cvs
    elif gcc_or_clang == 'clang_cvs':
        testClangByCvs(rewritepath4, tempcompilationgcc)
        referenceClangByCvs(rewritepath4, tempcompilationclang)

    else:
        print('please choose correct fuzz mode')
        exit()

    if os.path.exists('./test' + str(count0) + '.c-0.o'):
        os.remove('./test' + str(count0) + '.c-0.o')
    compiledbyclang(rewritepath4, tempcompilationclang)
    if os.path.exists('./test' + str(count0) + '.c-0.o'):
        os.remove('./test' + str(count0) + '.c-0.o')
    listdictgcc = read_error_wrong_Information2(
        tempcompilationgcc, 'error:')
    listdictclang = read_error_wrong_Information2(
        tempcompilationclang, 'error:')
    if len(listdictgcc) != 0 or len(listdictclang) != 0:
        print('----error, continue the next-------')
        os.remove(tempcompilationgcc)
        os.remove(tempcompilationclang)
        os.remove(rewritepath4)
        return True
    print('--no error--')
    return False


def calculateCFG(rewritepath4,
                 pypath,
                 count0,
                 graphlist,
                 delatefilepathlist):
    constructCFG(rewritepath4)
    cfgpath = pypath + 'test' + str(count0) + '.c-0.c.011t.cfg'
    graphoriginal = read_cfg(cfgpath)
    graphlist.append(graphoriginal)
    if os.path.exists(cfgpath):
        os.remove(cfgpath)
    delatefilepathlist.add(rewritepath4)


def extractGlobal(resultpath,
                  testcase,
                  rewritepath4,
                  count0,
                  delatefilepathlist):
    extractfilepath = resultpath + 'newvariantgcc1/' + testcase + '-global-variable.c'
    extractfilepath1 = resultpath + 'newvariantgcc1/' + \
                       testcase + '-global-function-declaration.c'

    # global variable: global_variable{name,type}
    # global-function:global_function{name, num of para}
    extract_globle_code(rewritepath4, extractfilepath, extractfilepath1)
    delatefilepathlist.add(extractfilepath)
    delatefilepathlist.add(extractfilepath1)
    flawhile0 = False
    originalcodefile = read_coverage(rewritepath4)

    # global line
    globallinenum = 0
    for k in range(0, len(originalcodefile)):
        if 'func_' in originalcodefile[k] and '{' in originalcodefile[k + 1]:
            globallinenum = k - 1
            break

    if os.path.exists('./test' + str(count0) + '.c-0.o'):
        os.remove('./test' + str(count0) + '.c-0.o')
    return globallinenum, originalcodefile


def selMutatedType(mutatetypeapply,
                   selectmutetype,
                   rateruleapplycount,
                   raterule,
                   ):
    if len(mutatetypeapply) == 0:
        print('yes, accept the mutate type')
        mutatetypeapply.append(selectmutetype)
        rateruleapplycount[selectmutetype] = rateruleapplycount[selectmutetype] + 1
        print('mutatetypeapply: ' + str(mutatetypeapply))
        # print('rateruleapplycount[selectmutetype]: ' + str(rateruleapplycount[selectmutetype]))
        return True
    else:
        formertype = mutatetypeapply[len(mutatetypeapply) - 1]
        position_formertype = 0
        position_presenttype = 0
        # print('before update raterule:' + str(raterule))
        # sortraterule = sorted(raterule.items(), key=lambda
        # item:item[1]) #increase type(sortraterule):<type
        # 'list'>
        sortraterule = sorted(
            raterule.items(),
            key=lambda item: item[1],
            reverse=True)  # decrease type(sortraterule):<type 'list'>

        for i in range(0, len(sortraterule)):
            if sortraterule[i][0] in formertype:
                position_formertype = i + 1
            elif sortraterule[i][0] in selectmutetype:
                position_presenttype = i + 1
        positiondiff = position_presenttype - position_formertype
        if math.pow(0.937, positiondiff) >= np.random.random():
            print('yes, accept the mutate type')
            mutatetypeapply.append(selectmutetype)
            rateruleapplycount[selectmutetype] = rateruleapplycount[selectmutetype] + 1
            print('mutatetypeapply: ' + str(mutatetypeapply))
            # print('rateruleapplycount[selectmutetype]: ' + str(rateruleapplycount[selectmutetype]))
            return True
        else:
            print('no, continue to select a mutate type')
            return False


def reportErrorInfo(resultpath,
                    testcase,
                    qq,
                    delatefilepathlist,
                    warningfile,
                    start,
                    gcc_or_clang
                    ):
    rewritepath5 = resultpath + 'newvariantgcc1/' + \
                   testcase + '-' + str(qq) + '.c'
    tempcompilationgcc1 = resultpath + 'tempcompilationgccclang/' + \
                          testcase + '-' + str(qq) + '.c.gcc.txt'
    tempcompilationclang1 = resultpath + 'tempcompilationgccclang/' + \
                            testcase + '-' + str(qq) + '.c.clang.txt'


    warning_raw_file = resultpath + 'tempcompilationgccclang/' + \
                       testcase + '-' + str(qq) + '-warning.txt'
    # java Gcc_ccs(tempcompilationgcc1, tempcompilationclang1, pypath, warning_raw_file)
    temp_pypath = 'programsInformation/newvariantgcc1'

    gcc_clang = 'Gcc_ccs'
    if gcc_or_clang == 'gcc_ccs':
        gcc_clang = 'Gcc_ccs'

    # if args[1] == cvs
    elif gcc_or_clang == 'gcc_cvs':
        gcc_clang = 'Gcc_cvs'

    # if args[1] == cos
    elif gcc_or_clang == 'gcc_cos':
        gcc_clang = 'Gcc_cos'

    # if args[1] == clang_ccs
    elif gcc_or_clang == 'clang_ccs':
        gcc_clang = 'Clang_ccs'

    # if args[1] == clang_cvs
    elif gcc_or_clang == 'clang_cvs':
        gcc_clang = 'Clang_cvs'

    else:
        print('please choose correct fuzz mode')
        exit()

    gcc_clang_cmd = 'java -cp ./javaclass ' + gcc_clang + ' ' + tempcompilationgcc1 + ' ' + tempcompilationclang1 + ' ' + temp_pypath + ' ' + warning_raw_file
    process = subprocess.Popen(gcc_clang_cmd, shell=True, stderr=subprocess.STDOUT)
    t.sleep(0.2)
    try:
        warningdefects_ccs = read_warning_raw_file(warning_raw_file)
    except:
        warningdefects_ccs = []
    if len(warningdefects_ccs) > 0:
        for index_warning in range(1, len(warningdefects_ccs)):
            # print('warningdefects_ccs[index_warning] ' + str(warningdefects_ccs[index_warning]))
            if warningdefects_ccs[index_warning][0] not in single_defects:
                single_defects.append(
                    warningdefects_ccs[index_warning][0])
                print('----find warning consistence-------')
                writeErrorinforPath = resultpath + warningfile
                mediumtime = datetime.datetime.now()
                time = mediumtime - start
                fwtime = open(writeErrorinforPath, 'a+')
                fwtime.write(str(time) + '\n')
                fwtime.close()
                locationErrorBetweenCompilers1 = testcase + '-' + \
                                                 str(qq) + '.c' + ' triggers a compiler warning defect:'

                write_errorInformation(
                    writeErrorinforPath,
                    locationErrorBetweenCompilers1,
                    warningdefects_ccs[index_warning])
                # delatefilepathlist.add(rewritepath5)

    delatefilepathlist.add(tempcompilationgcc1)
    delatefilepathlist.add(tempcompilationclang1)
    delatefilepathlist.add(warning_raw_file)

    if os.path.exists('./' + testcase + '-' + str(qq) + '.o'):
        os.remove('./' + testcase + '-' + str(qq) + '.o')


def delResult(delatefilepathlist,
              resultpath):
    if len(delatefilepathlist) > 0:
        for key in delatefilepathlist:
            if os.path.exists(key):
                os.remove(key)
    delatefilepathlist.clear()
    del_file(resultpath + 'newvariantgcc1/')


def reportMedTime(start,
                  resultpath,
                  timefile,
                  testcase,
                  seedtestcount,
                  uncompilablecount,
                  count0):
    mediumtime = datetime.datetime.now()
    consumtime = mediumtime - start
    if consumtime.__ge__(
            datetime.timedelta(
                days=3,
                hours=0,
                minutes=0,
                seconds=0)):
        fwtimecount = open(resultpath + timefile, 'a+')
        fwtimecount.write(str(consumtime) + '\t' + testcase + '\n')
        fwtimecount.write('seed test case : ' + str(seedtestcount) + '\n')
        fwtimecount.write(
            'uncompilable test case : ' +
            str(uncompilablecount) +
            '\n')
        fwtimecount.close()
        exit(0)
    if count0 % 10 == 0:
        fwtime = open(resultpath + timefile, 'a+')
        fwtime.write(str(consumtime) + '\n')
        fwtime.write(
            'number of seed test case : ' +
            str(seedtestcount) +
            '\n')
        fwtime.close()
