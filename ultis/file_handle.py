from config import *


def all_files_path(rootDir, filepaths):
    for root, dirs, files in os.walk(rootDir):
        for file in files:
            file_path = os.path.join(root, file)
            filepaths.append(file_path)
        for dir in dirs:
            dir_path = os.path.join(root, dir)
            all_files_path(dir_path, filepaths)


def del_file(path_data):
    file_data = []
    for filecoverage in os.listdir(path_data):
        file_data.append(path_data + filecoverage)
    if len(file_data) > 0:
        for key in file_data:
            if os.path.exists(key):
                os.remove(key)


def write_errorInformation(
        writeErrorInformationPath,
        compilerinformation,
        errorInformation):
    fw = open(writeErrorInformationPath, 'a+')
    fw.write(compilerinformation + '\n')
    fw.write('summary: '+errorInformation[0])
    #for i in range(len(errorInformation)):
    #    fw.write(''.join(errorInformation[i]) + '\n')
    fw.close()


def write_outdead(writeErrorInformationPath, outdeadline):
    fw1 = open(writeErrorInformationPath, 'a+')
    for i in range(len(outdeadline)):
        fw1.write(''.join(outdeadline[i]))
    fw1.close()


def read_coverage(coveragepath):
    listcoverage = []
    with open(coveragepath, 'r') as fcoverage:
        listcoverage = fcoverage.readlines()
    return listcoverage


def read_cfg(cfgpath):
    print('----begin read cfg file-----')
    fcfg = open(cfgpath)
    line = fcfg.readline()
    function = [[]]
    functionblock = []
    funflag = False
    while line:
        if line.startswith(';; Function func_') or line.startswith(
                ';; Function main'):
            if len(functionblock) != 0:
                function.append(functionblock)
                functionblock = []
            funflag = True
        elif line.startswith('func_') or line.startswith('main ('):
            funflag = False
        if funflag:
            functionblock.append(line)
        line = fcfg.readline()
    if len(functionblock) != 0:
        function.append(functionblock)
    print('----end read cfg file-----')
    # print(str(function))
    # construct graph
    graph = nx.DiGraph()
    nodesetnum = set()
    for eachblock in function:
        eachbolcknum = []
        for eachline in eachblock:
            eachlinenodes = []
            if 'succs' in eachline:
                eachlinesplit = eachline.split(' ')
                for eachsplit in eachlinesplit:
                    if eachsplit.strip().isdigit():
                        eachlinenodes.append(eachsplit)
                        eachbolcknum.append(eachsplit)
                nodefirstnum = int(eachlinenodes[0]) + int(len(nodesetnum))
                for eachindex in eachlinenodes[1:]:
                    nodenum = int(len(nodesetnum)) + int(eachindex)
                    graph.add_edge(str(nodefirstnum), str(nodenum))
        for eachbolcknumkey in eachbolcknum:
            nodesetnum.add(eachbolcknumkey)
    return graph


def read_specific(linenum, coverage):
    index1 = 0
    index2 = 0
    for h in range(0, len(coverage)):
        if h == linenum:
            index1 = coverage[h].index('{')
        elif h > linenum:
            if coverage[h].find('}') == index1:
                index2 = h
                break
    return index2



def read_write_testcase(readpath, writepath):
    listread = []
    countread = 0
    countwrite = 0
    with open(readpath, 'r') as fread:
        listread = fread.readlines()
    for r in range(0, len(listread)):
        if listread[r].startswith('typedef') is not True:
            break
        else:
            countread = countread + 1
    fwrite = open(writepath, 'a+')
    fwrite.write('#include <stdint.h>' + '\n')
    fwrite.write('#include <stdarg.h>' + '\n')
    fwrite.write('#include <stdlib.h>' + '\n')
    for w in range(countread, len(listread)):
        fwrite.write(listread[w])
    fwrite.close()


def read_error_wrong_Information2(rewritepath, regex):
    f = open(rewritepath)
    linef = f.readline()
    mydictall = []
    while linef:
        mydictlist = []
        if regex in linef:
            mydictall.append(linef)
        linef = f.readline()
    f.close()
    return mydictall


def read_warning_raw_file(warning_raw_file):
    warning_list = [[]]
    warning_detail = []
    each_warning_list = []
    with open(warning_raw_file, 'r') as fread:
        warning_detail = fread.readlines()
    for index_warning in range(0, len(warning_detail)):
        if '****' not in warning_detail[index_warning] and '####' not in warning_detail[index_warning]: # attentation!
            if len(each_warning_list) > 1:
                warning_list.append(each_warning_list)
                each_warning_list = []
            each_warning_list.append(warning_detail[index_warning])

        else:
            each_warning_list.append(warning_detail[index_warning])
    return warning_list



def read_write_testcase_new(readpath, writepath):
    listread = []
    listwrite = []
    countread = 0
    countwrite = 0
    with open(readpath, 'r') as fread:
        listread = fread.readlines()
    for r in range(0, len(listread)):

        if '?  :' in listread[r]:
            beforetriple = listread[r][0:listread[r].index('?  :')]
            wordlist = re.split('[()&*;, ]', beforetriple)
            suitablename = []
            for h in range(0, len(wordlist)):
                if '_' in wordlist[h] or wordlist[h].startswith('0x'):
                    suitablename.append(wordlist[h])
            selectname = random.randint(0, len(suitablename) - 1)
            insertname = suitablename[selectname]
            replacesentence = listread[r].replace(
                '?  :', '?' + insertname + ':')
            listwrite.append(replacesentence)

        else:
            listwrite.append(listread[r])
    fwrite = open(writepath, 'a+')
    for w in range(0, len(listwrite)):
        fwrite.write(listwrite[w])
    fwrite.close()
