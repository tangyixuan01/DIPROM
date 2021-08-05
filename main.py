import sys

from config import *
from visitors.visitor_count import *
from visitors.visitor import *
from ultis.file_handle import *
from ultis.mutate import *
from ultis.test_gcc_clang import *
from ultis.ulti import *


class FuncDefVisitor1(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_FuncDef(self, node):
        global variablelist
        global flagreselectmutatedtype
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            # 1:insert 0:no
            # flagdelete = 1
            if flagdelete == 1:
                generatorcode = c_generator.CGenerator()
                deletelistcodeline = generatorcode.visit(node).splitlines()
                comparedeletelistcodeline = deletelistcodeline
                functiontitle = wordlist = re.split(
                    '[()&*;, ]', comparedeletelistcodeline[0])
                whetherfunc = False
                for i in range(0, len(functiontitle)):
                    if functiontitle[i].startswith('func_'):
                        whetherfunc = True
                        break
                if whetherfunc:
                    flaginsert = True
                    selectlocal = 0
                    if 'pycparser.c_ast.Continue' not in self.selectmutetype and 'pycparser.c_ast.Break' not in self.selectmutetype:
                        while True:
                            if len(deletelistcodeline) == 4:
                                selectlocal = 2
                            else:
                                selectlocal = random.randint(
                                    2, len(deletelistcodeline) - 2)
                            if comparedeletelistcodeline[selectlocal].replace(
                                    ' ', '') != '{' and comparedeletelistcodeline[selectlocal].replace(
                                ' ', '') != '}' and comparedeletelistcodeline[selectlocal].replace(
                                ' ', '') != '':
                                break
                            else:
                                selectlocal = random.randint(
                                    2, len(deletelistcodeline) - 2)
                    else:
                        selectlocal = selectinsertlocal(deletelistcodeline)
                        if selectlocal == 0:
                            flaginsert = False
                    if flaginsert:
                        self.count += 1
                        nodevisittypedel = TypeDeclVisitor1()
                        nodevisittypedel.visit(node)
                        nodevisitlabel = LabelVisitor1()
                        nodevisitlabel.visit(node)
                        for key in variablelist.keys():
                            for t in range(0, len(deletelistcodeline)):
                                if key in deletelistcodeline[t]:
                                    substring1 = deletelistcodeline[t][:deletelistcodeline[t].index(
                                        key)]
                                    numberptr = substring1.count('*')
                                    realptr = ''
                                    if numberptr != 0:
                                        for u in range(0, numberptr):
                                            realptr = realptr + '*'
                                    variablelist[key] = variablelist[key] + realptr
                                    substring1 = deletelistcodeline[t][deletelistcodeline[t].index(
                                        key) + len(key):]
                                    if substring1.startswith('['):
                                        listwords = substring1.split(' ')
                                        numberweidu = listwords[0].count('[')
                                        realptr1 = ''
                                        if numberweidu != 0:
                                            for u in range(0, numberweidu):
                                                realptr1 = realptr1 + '[]'
                                        variablelist[key] = variablelist[key] + realptr1
                                        break
                                    else:
                                        break

                        # decide front or later : 0: front
                        insertlocal = 0
                        localformer = random.randint(0, 1)
                        blank = []
                        copyselectlocal = selectlocal

                        if localformer == 0:
                            insertlocal = selectlocal
                            for t in range(0,
                                           len(deletelistcodeline[selectlocal])):
                                if deletelistcodeline[selectlocal][t] == ' ':
                                    blank.append(' ')
                                else:
                                    break
                        else:
                            if deletelistcodeline[selectlocal +
                                                  1].replace(' ', '') == '{':
                                insertlocal = selectlocal + 2
                                for t in range(
                                        0, len(
                                            deletelistcodeline[selectlocal])):
                                    if deletelistcodeline[selectlocal][t] == ' ':
                                        blank.append(' ')
                                    else:
                                        break
                                blank.append('  ')
                            else:
                                insertlocal = selectlocal + 1
                                for t in range(
                                        0, len(
                                            deletelistcodeline[selectlocal])):
                                    if deletelistcodeline[selectlocal][t] == ' ':
                                        blank.append(' ')
                                    else:
                                        break
                        # clear variablelist
                        for localkey in list(variablelist.keys()):
                            wetherlocalvariable = False
                            for h in range(0, insertlocal):
                                if localkey in deletelistcodeline[h]:
                                    wetherlocalvariable = True
                                    break
                            if wetherlocalvariable is False:
                                del variablelist[localkey]
                        for localkey in list(variablelist.keys()):
                            if localkey.startswith('func_'):
                                del variablelist[localkey]
                        if 'pycparser.c_ast.Assignment' in self.selectmutetype:
                            renamecode = replacename('Assignment')
                            if len(renamecode) != 0:
                                print('insert Assignment')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.For' in self.selectmutetype:
                            renamecode = replacename('For')
                            if len(renamecode) != 0:
                                print('insert  For')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.Switch' in self.selectmutetype:
                            renamecode = replacename('Switch')
                            if len(renamecode) != 0:
                                print('insert  Switch')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.If' in self.selectmutetype:
                            renamecode = replacename('If')
                            if len(renamecode) != 0:
                                print('insert  If')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.Return' in self.selectmutetype:
                            renamecode = replacename('Return')
                            if len(renamecode) != 0:
                                print('insert  Return')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.While' in self.selectmutetype:
                            renamecode = replacename('While')
                            if len(renamecode) != 0:
                                print('insert  while')
                                for b in range(0, len(renamecode)):
                                    deletelistcodeline.insert(
                                        insertlocal, ''.join(blank) + renamecode[b])
                                    insertlocal += 1
                            else:
                                flagreselectmutatedtype = True
                        elif 'pycparser.c_ast.FuncDef' in self.selectmutetype:
                            print('insert function')
                            renamecode = replacenamefunc('FuncDef')
                            print('renamecode:' + str(renamecode))
                            if len(renamecode) != 0:
                                print('insert function reference')
                                deletelistcodeline.insert(
                                    insertlocal, ''.join(blank) + renamecode)
                        elif 'pycparser.c_ast.Break' in self.selectmutetype:
                            print('insert break')
                            deletelistcodeline.insert(
                                insertlocal, ''.join(blank) + 'break;\n')
                        elif 'pycparser.c_ast.Continue' in self.selectmutetype:
                            print('insert continue')
                            deletelistcodeline.insert(
                                insertlocal, ''.join(blank) + 'continue;\n')
                        elif 'pycparser.c_ast.Goto' in self.selectmutetype:
                            print('insert goto')
                            deletelistcodeline.insert(
                                insertlocal, ''.join(blank) + 'goto Label;')
                            labelinsertlocal = 0
                            blanklabelinsertlocal = []
                            while True:
                                labelinsertlocal = random.randint(
                                    2, len(deletelistcodeline) - 2)
                                if deletelistcodeline[labelinsertlocal].replace(
                                        ' ', '') != '{' and deletelistcodeline[labelinsertlocal].replace(
                                    ' ', '') != '}' and deletelistcodeline[labelinsertlocal].replace(
                                    ' ', '') != '':
                                    break
                                else:
                                    labelinsertlocal = random.randint(
                                        2, len(deletelistcodeline) - 2)

                            for t in range(
                                    0, len(
                                        deletelistcodeline[labelinsertlocal])):
                                if deletelistcodeline[labelinsertlocal][t] == ' ':
                                    blanklabelinsertlocal.append(' ')
                                else:
                                    break
                            deletelistcodeline.insert(
                                labelinsertlocal, ''.join(blanklabelinsertlocal) + 'Label:')
                        for u in range(0, len(deletelistcodeline)):
                            print(deletelistcodeline[u])
                            inlinefunction.append(deletelistcodeline[u])


def extract_globle_code(originalpath, extractvariable, extractfunction):
    extractcodevariable = []
    extractcodefunction = []
    originalcode = read_coverage(originalpath)
    for i in range(0, len(originalcode)):
        if 'func_' not in originalcode[i]:
            extractcodevariable.append(originalcode[i])
        elif 'func_' in originalcode[i] and '{' not in originalcode[i + 1]:
            extractcodefunction.append(originalcode[i])
        else:
            break
    fwrite = open(extractvariable, 'a+')
    for w in range(0, len(extractcodevariable)):
        fwrite.write(extractcodevariable[w])
    fwrite.close()
    fwrite1 = open(extractfunction, 'a+')
    fwrite1.write('#include <stdint.h>' + '\n')
    fwrite1.write('#include <stdarg.h>' + '\n')
    fwrite1.write('#include <stdlib.h>' + '\n')
    for w in range(0, len(extractcodefunction)):
        fwrite1.write(extractcodefunction[w])
    fwrite1.close()
    global variablelist
    astvariable = parse_file(
        extractvariable,
        use_cpp=True,
        cpp_path='/usr/bin/gcc',
        cpp_args=[
            '-E',
            r'' + parse_cmd])
    nodevisit = TypeDeclVisitor1()
    nodevisit.visit(astvariable.ext)
    # variablelist
    for key in variablelist.keys():
        for t in range(0, len(extractcodevariable)):
            if key in extractcodevariable[t]:
                substring1 = extractcodevariable[t][:extractcodevariable[t].index(
                    key)]
                numberptr = substring1.count('*')
                realptr = ''
                if numberptr != 0:
                    for u in range(0, numberptr):
                        realptr = realptr + '*'
                variablelist[key] = variablelist[key] + realptr
                substring1 = extractcodevariable[t][extractcodevariable[t].index(
                    key) + len(key):]
                if substring1.startswith('['):
                    listwords = substring1.split(' ')
                    numberweidu = listwords[0].count('[')
                    realptr1 = ''
                    if numberweidu != 0:
                        for u in range(0, numberweidu):
                            realptr1 = realptr1 + '[]'
                    variablelist[key] = variablelist[key] + realptr1
                    break
                else:
                    break
    for key in variablelist:
        global_variable[key] = variablelist[key]
    astfunction = parse_file(
        extractfunction,
        use_cpp=True,
        cpp_path='/usr/bin/gcc',
        cpp_args=[
            '-E',
            r'' + parse_cmd])
    nodevisit1 = TypeDeclVisitor1()
    nodevisit1.visit(astfunction.ext)
    # variablelist
    for key in variablelist.keys():
        if key.startswith('func_'):
            for t in range(0, len(extractcodefunction)):
                if key in extractcodefunction[t]:
                    if ',' in extractcodefunction[t]:
                        para = extractcodefunction[t].split(',')
                        variablelist[key] = str(len(para))
                    else:
                        variablelist[key] = '0'
                    break
    for key in variablelist:
        if key.startswith('func_'):
            global_function[key] = variablelist[key]
    variablelist = {}


def insertprocess(
        resultpath,
        testcase,
        qq,
        originalcodefile,
        globallinenum,
        astnew1,
        graphlist,
        mutatetypeapply,
        raterule,
        gcc_or_clang,
        selectmutetype):
    global allcompilablecout
    global inlinefunction
    global uncompilablecount
    global selectfunctionfile
    global flagreselectmutatedtype
    rewritepath5 = resultpath + 'newvariantgcc1/' + \
                   testcase + '-' + str(qq) + '.c'
    noterminate = True
    while (True):
        if 'pycparser.c_ast.FuncDef' in selectmutetype:
            print('outside of function is ready to insert : ')
            # insert reference of inserted function
            rewritepath555 = resultpath + 'newvariantgcc1/' + \
                             testcase + '-' + str(qq) + '-old.c'
            astnew = copy.deepcopy(astnew1)
            nodevisitfunc = FuncDefVisitor1(selectmutetype)
            nodevisitfunc.visit(astnew.ext)
            if len(inlinefunction) == 0:
                continue

            renamecodefunction = replacenamefunc_name()
            if len(renamecodefunction) != 0:
                f = open(rewritepath555, 'w+')
                num1 = 0
                num2 = 0
                for g in range(0, len(originalcodefile)):
                    if inlinefunction[0] in originalcodefile[g] and (
                            originalcodefile[g].strip().endswith(';') is False):
                        num1 = g
                        f.write('\n')
                        for v in range(0, len(inlinefunction)):
                            f.write(inlinefunction[v] + '\n')
                        f.write('\n')
                        break
                    else:
                        f.write(originalcodefile[g])

                for l in range(num1 + 2, len(originalcodefile)):
                    # print('---------'+str(l))
                    if 'func_' in originalcodefile[l] and (
                            originalcodefile[l].strip().endswith(';') is False):
                        num2 = l
                        break
                    elif originalcodefile[l].startswith('int'):
                        num2 = l
                        break

                for t in range(num2, len(originalcodefile)):
                    f.write(originalcodefile[t])
                f.close()
                inlinefunction = []
                del astnew
                oldoriginalcodefile = read_coverage(rewritepath555)
                # insert the function

                # write
                f = open(rewritepath5, 'w+')
                for d in range(0, globallinenum + 1):
                    f.write(originalcodefile[d])
                f.write('\n')
                for e in range(0, len(renamecodefunction)):
                    f.write(renamecodefunction[e])
                f.write('\n')
                for w in range(globallinenum + 1, len(oldoriginalcodefile)):
                    f.write(oldoriginalcodefile[w])
                f.close()
                if os.path.exists(rewritepath555):
                    os.remove(rewritepath555)
                break
            else:
                inlinefunction = []
                continue

        else:
            f = open(rewritepath5, 'w+')
            print('inline of function is ready to insert : ')
            # insert inline the function
            astnew = copy.deepcopy(astnew1)
            nodevisitfunc = FuncDefVisitor1(selectmutetype)
            if flagreselectmutatedtype:
                noterminate = False
                print(
                    'flagreselectmutatedtype is true, we need to delete the mutatetypeapply[-1]: ' + mutatetypeapply[
                        -1] + ', reselect a mutate type')
                rateruleapplycount[mutatetypeapply[-1]
                ] = rateruleapplycount[mutatetypeapply[-1]] - 1
                del mutatetypeapply[-1]
                flagreselectmutatedtype = False
                break
            nodevisitfunc.visit(astnew.ext)
            if len(inlinefunction) == 0:
                print('---------------retry again-------------------')
                continue

            num1 = 0
            num2 = 0
            for g in range(0, len(originalcodefile)):
                if inlinefunction[0] in originalcodefile[g] and (
                        originalcodefile[g].strip().endswith(';') is False):
                    num1 = g
                    f.write('\n')
                    for v in range(0, len(inlinefunction)):
                        f.write(inlinefunction[v] + '\n')
                    f.write('\n')
                    break
                else:
                    f.write(originalcodefile[g])

            for l in range(num1 + 2, len(originalcodefile)):

                if 'func_' in originalcodefile[l] and (
                        originalcodefile[l].strip().endswith(';') is False):

                    num2 = l
                    break
                elif originalcodefile[l].startswith('int'):
                    num2 = l
                    break

            for t in range(num2, len(originalcodefile)):
                f.write(originalcodefile[t])
            f.close()
            inlinefunction = []
            del astnew
            break

    if noterminate:
        tempcompilationgcc11 = resultpath + 'tempcompilationgccclang/' + \
                               testcase + '-' + str(qq) + '.c.gcc.txt'
        tempcompilationclang11 = resultpath + 'tempcompilationgccclang/' + \
                                 testcase + '-' + str(qq) + '.c.clang.txt'

        if gcc_or_clang == 'gcc_ccs':
            testGccByCcs(rewritepath5, tempcompilationgcc11)
            referenceClangByCcs(rewritepath5, tempcompilationclang11)

        # if args[1] == cvs
        elif gcc_or_clang == 'gcc_cvs':
            testGccByCvs(rewritepath5, tempcompilationgcc11)
            referenceGccByCvs(rewritepath5, tempcompilationclang11)

        # if args[1] == cos
        elif gcc_or_clang == 'gcc_cos':
            testGccByCos(rewritepath5, tempcompilationgcc11)
            referenceGccByCos(rewritepath5, tempcompilationclang11)

        # if args[1] == clang_ccs
        elif gcc_or_clang == 'clang_ccs':
            testClangByCcs(rewritepath5, tempcompilationgcc11)
            referenceGccByCcs(rewritepath5, tempcompilationclang11)

        # if args[1] == clang_cvs
        elif gcc_or_clang == 'clang_cvs':
            testClangByCvs(rewritepath5, tempcompilationgcc11)
            referenceClangByCvs(rewritepath5, tempcompilationclang11)

        else:
            print('please choose correct fuzz mode')
            exit()

        if os.path.exists('./' + testcase + '-' + str(qq) + '.o'):
            os.remove('./' + testcase + '-' + str(qq) + '.o')

        if os.path.exists('./' + testcase + '-' + str(qq) + '.o'):
            os.remove('./' + testcase + '-' + str(qq) + '.o')
        listdictgcc = read_error_wrong_Information2(
            tempcompilationgcc11, 'error:')
        listdictclang = read_error_wrong_Information2(
            tempcompilationclang11, 'error:')
        if len(listdictgcc) != 0 and len(listdictclang) != 0:
            print('........uncompilable...........')
            uncompilablecount += 1
            os.remove(tempcompilationgcc11)
            os.remove(tempcompilationclang11)
            os.remove(rewritepath5)
            # rateruleapplycount[mutatetypeapply[-1]] = rateruleapplycount[mutatetypeapply[-1]]-1
            del mutatetypeapply[-1]
            return False
        else:

            # update the raterulesuccesscount
            # print('////////////mutatetypeapply[-1]:' + mutatetypeapply[-1])
            raterulesuccesscount[mutatetypeapply[-1]
            ] = raterulesuccesscount[mutatetypeapply[-1]] + 1
            # calculate CFG
            constructCFG(rewritepath5)
            # read cfg file
            cfgpath = pypath + testcase + '-' + str(qq) + '.c.011t.cfg'
            graphvariant = read_cfg(cfgpath)
            graphlist.append(graphvariant)
            if os.path.exists(cfgpath):
                os.remove(cfgpath)
            # calculate current GED
            subgedlist = []
            for h in range(0, len(graphlist) - 1):
                ged = gm.GraphEditDistance(1, 1, 1, 1)
                result = ged.compare([graphvariant, graphlist[h]], None)
                bingjiedges = list(
                    set(graphvariant.edges).union(set(graphlist[h].edges)))
                normalged = float(result[0][1] / len(bingjiedges))
                subgedlist.append(normalged)

            # calculate current dis(statement)
            subdistance = []

            for g in range(0, qq):
                rewritepath7 = resultpath + 'newvariantgcc1/' + \
                               testcase + '-' + str(g) + '.c'
                dist = codedistance1(rewritepath7, rewritepath5)
                subdistance.append(dist)

            # calculate current dis(ged+dis(statement))
            subvariantscore = []
            for b in range(0, len(subgedlist)):
                subscore = subgedlist[b] + subdistance[b]
                subvariantscore.append(subscore)
            newaveragescorebefore = np.mean(subvariantscore)

            newratescore = float(
                raterulesuccesscount[mutatetypeapply[-1]] / rateruleapplycount[mutatetypeapply[-1]])
            updateraterule = newaveragescorebefore * newratescore
            raterule[mutatetypeapply[-1]] = updateraterule
            return True
    else:
        return False


def deleteprocess(
        resultpath,
        testcase,
        qq,
        originalcodefile,
        globallinenum,
        astnew1,
        graphlist,
        mutatetypeapply,
        raterule,
        gcc_or_clang, generator1,
        selectmutetype):
    global allcompilablecout
    global uncompilablecount
    global entirestructdelete
    flawhile1 = False
    countwhile1 = 0
    rewritepath55 = resultpath + 'newvariantgcc/' + \
                    testcase + '-' + str(qq) + '.c'
    rewritepath6 = resultpath + 'newvariantgcc1/' + \
                   testcase + '-' + str(qq) + '.c'

    astnew = copy.deepcopy(astnew1)

    print('present delete type is :' + selectmutetype)
    print('ready to delete : ')
    while True:
        if 'pycparser.c_ast.If' in selectmutetype:
            nodevisit = IfVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.TernaryOp' in selectmutetype:
            nodevisit = TernaryOpVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Decl' in selectmutetype:
            nodevisit = DeclVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.BinaryOp' in selectmutetype:
            nodevisit = BinaryOpVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Assignment' in selectmutetype:
            nodevisit = AssignmentVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Compound' in selectmutetype:
            nodevisit = CompoundVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.CompoundLiteral' in selectmutetype:
            nodevisit = CompoundLiteralVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Default' in selectmutetype:
            nodevisit = DefaultVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Switch' in selectmutetype:
            nodevisit = SwitchVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.While' in selectmutetype:
            nodevisit = WhileVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.ExprList' in selectmutetype:
            nodevisit = ExprListVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.InitList' in selectmutetype:
            nodevisit = InitListVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.FileAST' in selectmutetype:
            nodevisit = FileASTVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.For' in selectmutetype:
            nodevisit = ForVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.FuncDecl' in selectmutetype:
            nodevisit = FuncDeclVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Case' in selectmutetype:
            nodevisit = CaseVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.ID' in selectmutetype:
            nodevisit = IDVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.IdentifierType' in selectmutetype:
            nodevisit = IdentifierTypeVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.ParamList' in selectmutetype:
            nodevisit = ParamListVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.PtrDecl' in selectmutetype:
            nodevisit = PtrDeclVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Label' in selectmutetype:
            nodevisit = LabelVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Return' in selectmutetype:
            nodevisit = ReturnVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.TypeDecl' in selectmutetype:
            nodevisit = TypeDeclVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Typename' in selectmutetype:
            nodevisit = TypenameVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.UnaryOp' in selectmutetype:
            nodevisit = UnaryOpVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Constant' in selectmutetype:
            nodevisit = ConstantVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.ArrayDecl' in selectmutetype:
            nodevisit = ArrayDeclVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Continue' in selectmutetype:
            nodevisit = ContinueVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.Break' in selectmutetype:
            nodevisit = BreakVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        elif 'pycparser.c_ast.FuncDef' in selectmutetype:
            nodevisit = FuncDefVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)
        else:
            nodevisit = GotoVisitor(selectmutetype)
            nodevisit.visit(astnew.ext)

        if len(deleterule) > 0:
            break
    deleterulekey = deleterule[0]
    print('deleterulekey: ' + deleterulekey)
    # presentrule = deleterulekey[:deleterulekey.rindex('.')]
    del deleterule[:]

    # warning testing and update the raterule
    if len(entirestructdelete) > 0:
        path = pypath + 'comparecoverage/'
        allfilecode = []
        for parent, dirnames, filenames in os.walk(path):
            for filename in filenames:
                allfilecode = read_coverage(path + filename)

        begin_index, end_index = coverage_lines(entirestructdelete)

        diff_index = end_index - begin_index
        if diff_index > 0:
            f = open(rewritepath6, 'w+')
            for index_allfilecode in range(0, len(allfilecode)):
                if index_allfilecode >= begin_index and index_allfilecode <= end_index:
                    f.write('\n')
                else:
                    f.write(allfilecode[index_allfilecode])
            f.close()
        else:

            f = open(rewritepath6, 'w+')
            for index_allfilecode in range(0, len(allfilecode)):
                if index_allfilecode == begin_index:
                    re_write_line = allfilecode[index_allfilecode].replace(
                        entirestructdelete[0], '')
                    f.write(re_write_line)
                else:
                    f.write(allfilecode[index_allfilecode])
            f.close()
        entirestructdelete = []
    else:
        f = open(rewritepath55, 'w+')
        f.write(str(generator1.visit(astnew)))
        f.close()

        read_write_testcase(rewritepath55, rewritepath6)
        os.remove(rewritepath55)
    # determine whether is compilable
    tempcompilationgcc11 = resultpath + 'tempcompilationgccclang/' + \
                           testcase + '-' + str(qq) + '.c.gcc.txt'
    tempcompilationclang11 = resultpath + 'tempcompilationgccclang/' + \
                             testcase + '-' + str(qq) + '.c.clang.txt'

    if gcc_or_clang == 'gcc_ccs':
        testGccByCcs(rewritepath6, tempcompilationgcc11)
        referenceClangByCcs(rewritepath6, tempcompilationclang11)

    # if args[1] == cvs
    elif gcc_or_clang == 'gcc_cvs':
        testGccByCvs(rewritepath6, tempcompilationgcc11)
        referenceGccByCvs(rewritepath6, tempcompilationclang11)

    # if args[1] == cos
    elif gcc_or_clang == 'gcc_cos':
        testGccByCos(rewritepath6, tempcompilationgcc11)
        referenceGccByCos(rewritepath6, tempcompilationclang11)

    # if args[1] == clang_ccs
    elif gcc_or_clang == 'clang_ccs':
        testClangByCcs(rewritepath6, tempcompilationgcc11)
        referenceGccByCcs(rewritepath6, tempcompilationclang11)

    # if args[1] == clang_cvs
    elif gcc_or_clang == 'clang_cvs':
        testClangByCvs(rewritepath6, tempcompilationgcc11)
        referenceClangByCvs(rewritepath6, tempcompilationclang11)

    else:
        print('please choose correct fuzz mode')
        exit()

    if os.path.exists('./' + testcase + '-' + str(qq) + '.o'):
        os.remove('./' + testcase + '-' + str(qq) + '.o')

    if os.path.exists('./' + testcase + '-' + str(qq) + '.o'):
        os.remove('./' + testcase + '-' + str(qq) + '.o')
    listdictgcc = read_error_wrong_Information2(tempcompilationgcc11, 'error:')
    listdictclang = read_error_wrong_Information2(
        tempcompilationclang11, 'error:')
    if len(listdictgcc) != 0 and len(listdictclang) != 0:
        print('........uncompilable...........')
        uncompilable.append(selectmutetype)
        uncompilablecount += 1
        os.remove(tempcompilationgcc11)
        os.remove(tempcompilationclang11)
        os.remove(rewritepath6)
        # rateruleapplycount[mutatetypeapply[-1]] = rateruleapplycount[mutatetypeapply[-1]]-1
        del mutatetypeapply[-1]
        return False
    else:
        # update the raterulesuccesscount
        raterulesuccesscount[mutatetypeapply[-1]
        ] = raterulesuccesscount[mutatetypeapply[-1]] + 1
        # update the raterule
        # calculate CFG
        constructCFG(rewritepath6)
        # read cfg file
        cfgpath = pypath + testcase + '-' + str(qq) + '.c.011t.cfg'
        graphvariant = read_cfg(cfgpath)
        graphlist.append(graphvariant)
        if os.path.exists(cfgpath):
            os.remove(cfgpath)
        # calculate current GED
        subgedlist = []
        for h in range(0, len(graphlist) - 1):
            ged = gm.GraphEditDistance(1, 1, 1, 1)
            result = ged.compare([graphvariant, graphlist[h]], None)
            bingjiedges = list(
                set(graphvariant.edges).union(set(graphlist[h].edges)))
            normalged = float(result[0][1] / len(bingjiedges))
            subgedlist.append(normalged)

        # calculate current dis(statement)
        subdistance = []
        for g in range(0, qq):
            rewritepath7 = resultpath + 'newvariantgcc1/' + \
                           testcase + '-' + str(g) + '.c'
            dist = codedistance1(rewritepath7, rewritepath6)
            subdistance.append(dist)

        # calculate current dis(ged+dis(statement)):subvariantscore
        subvariantscore = []
        for b in range(0, len(subgedlist)):
            subscore = subgedlist[b] + subdistance[b]
            subvariantscore.append(subscore)
        newaveragescorebefore = np.mean(subvariantscore)
        newratescore = float(
            raterulesuccesscount[mutatetypeapply[-1]] / rateruleapplycount[mutatetypeapply[-1]])
        updateraterule = newaveragescorebefore * newratescore
        raterule[mutatetypeapply[-1]] = updateraterule
        return True


if __name__ == '__main__':
    start = datetime.datetime.now()
    count0 = 0
    filepaths = []
    testcases_path = sys.argv[1]
    gcc_or_clang = sys.argv[2]
    if not os.path.exists(testcases_path):
        print('testcases path error, please choose new')
        exit()
    all_files_path(testcases_path, filepaths)
    #create temp directions
    create_necessary_folder(pypath + 'comparecoverage/')
    create_necessary_folder(pypath + 'outdead/')
    create_necessary_folder(pypath + 'outdead1/')
    create_necessary_folder(pypath + 'testcases2/')
    create_necessary_folder(resultpath + 'newvariantgcc/')
    create_necessary_folder(resultpath + 'newvariantgcc1/')
    create_necessary_folder(resultpath + 'tempcompilationgccclang/')
    for filepath in filepaths:
        presentnodetype = []
        graphlist = []
        global_variable = {}
        global_function = {}
        del_file(pypath + 'comparecoverage/')
        del_file(resultpath + 'tempcompilationgccclang/')
        delatefilepathlist = set()
        count0 = count0 + 1
        print('**********the test case number is : %d **********' % count0)
        print(filepath)

        # use AST to move annotation
        rewritepath1, generator1 = astMoveAnnotation(filepath, parse_cmd, pypath, count0)
        testcase = 'test' + str(count0) + '.c'

        # compile the testcase
        if compileTestCase(pypath, count0):
            continue
        # read coverage
        filecoverage = read_coverage(pypath + 'test' + str(count0) + '.c.gcov')

        # delete dead code
        afterdelete = delDeadCode(filecoverage)
        rewritepath2 = pypath + 'outdead/test' + str(count0) + '.c'
        write_outdead(rewritepath2, afterdelete)

        # rewrite: delete function declaration/ insert ; after 'if'(no { in the
        # next line of if)
        afterdelete2 = delAfterIf(afterdelete)
        rewritepath3 = pypath + 'outdead1/test' + str(count0) + '.c'
        write_outdead(rewritepath3, afterdelete2)

        # delete coverage file
        delCoverageFile(rewritepath1, pypath, count0)

        # delete original test case
        delOriTestCase(pypath, count0)

        # compiled file
        rewritepath4 = compileFile(resultpath, testcase, pypath, count0, delatefilepathlist)

        # compile original file
        if compileOriFile(resultpath, count0, rewritepath4, gcc_or_clang):
            continue

        # calculate CFG
        calculateCFG(rewritepath4, pypath, count0, graphlist, delatefilepathlist)
        seedtestcount += 1
        astnew1 = parse_file(rewritepath4, use_cpp=True, cpp_path='gcc', cpp_args=[
            '-E', r'' + parse_cmd])

        # extract the globle code
        globallinenum, originalcodefile = extractGlobal(resultpath, testcase, rewritepath4, count0, delatefilepathlist)

        # present types of AST
        presentnodetype = determinenodetype(astnew1, presentnodetype)
        presentnodetype = list(set(presentnodetype))

        if 'pycparser.c_ast.For' in presentnodetype or 'pycparser.c_ast.While' in presentnodetype:
            presentnodetype = presentnodetype + classinserttype1 + classinserttype2
        else:
            presentnodetype += classinserttype1
        for qq in range(1, 9):
            print('number is %d-----this is the : %d-----' % (count0, qq))
            # select and determine whether to accept the mutated type
            flagecompilable = False
            while True:
                while True:
                    # select the mutated type
                    selectmutetype = choice(presentnodetype)
                    if selMutatedType(mutatetypeapply, selectmutetype, rateruleapplycount, raterule):
                        break
                    else:
                        continue

                if selectmutetype.startswith('prune'):
                    flagecompilable = deleteprocess(
                        resultpath,
                        testcase,
                        qq,
                        originalcodefile,
                        globallinenum,
                        astnew1,
                        graphlist,
                        mutatetypeapply,
                        raterule,
                        gcc_or_clang,
                        generator1,
                        selectmutetype
                    )
                else:
                    flagecompilable = insertprocess(
                        resultpath,
                        testcase,
                        qq,
                        originalcodefile,
                        globallinenum,
                        astnew1,
                        graphlist,
                        mutatetypeapply,
                        raterule,
                        gcc_or_clang,
                        selectmutetype
                    )
                if flagecompilable:
                    break
            reportErrorInfo(resultpath, testcase, qq, delatefilepathlist, warningfile, start, gcc_or_clang)
        del astnew1

        gc.collect()
        mutatetypeapply = []
        delResult(delatefilepathlist, resultpath)

        reportMedTime(start, resultpath, timefile, testcase, seedtestcount, uncompilablecount, count0)
    #delete temp directions
    shutil.rmtree(pypath + 'comparecoverage/')
    shutil.rmtree(pypath + 'outdead/')
    shutil.rmtree(pypath + 'outdead1/')
    shutil.rmtree(pypath + 'testcases2/')
    shutil.rmtree(resultpath + 'newvariantgcc/')
    shutil.rmtree(resultpath + 'newvariantgcc1/')
    shutil.rmtree(resultpath + 'tempcompilationgccclang/')
    end = datetime.datetime.now()
    print(str(end - start))
