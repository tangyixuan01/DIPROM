from config import *
from ultis.mutate import coverage


class IfVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_If(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.If':
                    if node.cond:
                        print('the entire cond in if is ready to delete...')
                        generatorcode = c_generator.CGenerator()
                        entirestructdelete = generatorcode.visit(
                            node).splitlines()
                        print(str(entirestructdelete))
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.If')
                elif self.selectmutetype == 'prune.pycparser.c_ast.If.iftrue':
                    if node.iftrue:
                        print('the entire iftrue in if is ready to delete...')
                        node.iftrue = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.If.iftrue')
                else:
                    if node.iffalse:
                        print('the entire iffalse in if is ready to delete...')
                        node.iffalse = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.If.iffalse')


class TernaryOpVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_TernaryOp(self, node):
        

        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.TernaryOp.cond':
                    if node.cond:
                        print('the entire cond in TernaryOp is ready to delete...')
                        node.cond = None
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.TernaryOp.cond')
                elif self.selectmutetype == 'prune.pycparser.c_ast.TernaryOp.iftrue':
                    if node.iftrue:
                        print('the entire iftrue in TernaryOp is ready to delete...')
                        node.iftrue = None
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.TernaryOp.iftrue')
                else:
                    if node.iffalse:
                        print('the entire iffalse in TernaryOp is ready to delete...')
                        node.iffalse = None
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.TernaryOp.iffalse')


class DeclVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Decl(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                generatorcode = c_generator.CGenerator()
                deletelistcodeline = generatorcode.visit(node).splitlines()
                flag = coverage(deletelistcodeline)
                if flag:
                    if self.selectmutetype == 'prune.pycparser.c_ast.Decl.quals':
                        if node.quals:
                            print('the quals in decl is ready to delete...')
                            node.quals = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Decl.quals')
                    elif self.selectmutetype == 'prune.pycparser.c_ast.Decl.storage':
                        if node.storage:
                            print('the storage in decl is ready to delete...')
                            node.storage = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Decl.storage')
                    elif self.selectmutetype == 'prune.pycparser.c_ast.Decl.funcspec':
                        if node.funcspec:
                            print('the funcspec in decl is ready to delete...')
                            node.funcspec = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Decl.funcspec')
                    elif self.selectmutetype == 'prune.pycparser.c_ast.Decl.init':
                        if node.init:
                            print('the entire init in decl is ready to delete...')
                            node.init = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Decl.init')
                    else:
                        if node.bitsize:
                            print('the entire bitsize in decl is ready to delete...')
                            node.bitsize = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Decl.bitsize')


class BinaryOpVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_BinaryOp(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.BinaryOp':
                    print('the entire BinaryOp is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.BinaryOp')


class AssignmentVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Assignment(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.Assignment.op':
                    if node.op:
                        node.op = ''
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.Assignment.op')
                else:
                    print('the entire Assignment is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.Assignment')


class CompoundVisitor(NodeVisitor):
    # one operation:[[block_items]]
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Compound(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.block_items:
                    print('the entire block_items of Compound is ready to delete...')
                    node.block_items = []
                    self.count += 1
                    deleterule.append(
                        'prune.pycparser.c_ast.Compound.block_items')


class CompoundLiteralVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_CompoundLiteral(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.init:
                    print('the entire init of CompoundLiteral is ready to delete...')
                    node.init = None
                    self.count += 1
                    deleterule.append(
                        'prune.pycparser.c_ast.CompoundLiteral.init')


class DefaultVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Default(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.Default.stmts':
                    if node.stmts:
                        print('the entire stmts of Default is ready to delete...')
                        node.stmts = []
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.Default.stmts')
                else:
                    print('the entire Default is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.Default')


class SwitchVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Switch(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.Switch.stmt':
                    if node.stmt:
                        print('the entire stmt of Switch is ready to delete...')
                        node.stmt = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.Switch.stmt')
                else:
                    print('the entire Switch is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.Switch')


class WhileVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_While(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'pycparser.c_ast.While':
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.While')
                else:
                    if node.stmt:
                        print('the entire stmt of While is ready to delete...')
                        node.stmt = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.While.stmt')


class ExprListVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_ExprList(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.exprs:
                    print('the entire exprs of ExprList is ready to delete...')
                    node.exprs = []
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.ExprList.exprs')


class InitListVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_InitList(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.exprs:
                    print('the entire exprs of InitList is ready to delete...')
                    node.exprs = []
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.InitList.exprs')


class FileASTVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_FileAST(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.ext:
                    print('the entire ext of FileAST is ready to delete...')
                    node.ext = []
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.FileAST.ext')


class ForVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_For(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # four operations: ['init', 'cond', 'next', 'stmt' ]
                if self.selectmutetype == 'prune.pycparser.c_ast.For.init':
                    if node.init:
                        print('the entire init in For is ready to delete...')
                        node.init = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.For.init')
                elif self.selectmutetype == 'prune.pycparser.c_ast.For.cond':
                    if node.cond:
                        print('the entire cond of For is ready to delete...')
                        node.cond = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.For.cond')
                elif self.selectmutetype == 'prune.pycparser.c_ast.For.next':
                    if node.next:
                        print("the entire next of For is ready to delete...")
                        node.next = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.For.next')
                elif self.selectmutetype == 'prune.pycparser.c_ast.For.stmt':
                    if node.stmt:
                        print('the entire stmt of For is ready to delete...')
                        node.stmt = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.For.stmt')
                else:
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.For')


class FuncDeclVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_FuncDecl(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                generatorcode = c_generator.CGenerator()
                deletelistcodeline = generatorcode.visit(node).splitlines()
                flag = coverage(deletelistcodeline)
                if flag:
                    # two operations: ['args', 'type' ]
                    if self.selectmutetype == 'prune.pycparser.c_ast.FuncDecl.args':
                        if node.args:
                            print(
                                'the entire args in FuncDecl is ready to delete...')
                            node.args = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.FuncDecl.args')
                    elif self.selectmutetype == 'prune.pycparser.c_ast.FuncDecl.type':
                        if node.type:
                            print(
                                'the entire type of FuncDecl is ready to delete...')
                            node.type = None
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.FuncDecl.type')
                    else:
                        print('the entire FuncDecl is ready to delete...')
                        generatorcode = c_generator.CGenerator()
                        entirestructdelete = generatorcode.visit(
                            node).splitlines()
                        print(str(entirestructdelete))
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.FuncDecl')


class CaseVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Case(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                generatorcode = c_generator.CGenerator()
                deletelistcodeline = generatorcode.visit(node).splitlines()
                flag = coverage(deletelistcodeline)
                if flag:
                    # two operations: ['expr'], [['stmts']]
                    if self.selectmutetype == 'prune.pycparser.c_ast.Case':
                        if node.expr:
                            print('the entire Case is ready to delete...')
                            generatorcode = c_generator.CGenerator()
                            entirestructdelete = generatorcode.visit(
                                node).splitlines()
                            print(str(entirestructdelete))
                            self.count += 1
                            deleterule.append('prune.pycparser.c_ast.Case')
                    else:
                        if node.stmts:
                            print('the entire stmts of Case is ready to delete...')
                            node.stmts = []
                            self.count += 1
                            deleterule.append(
                                'prune.pycparser.c_ast.Case.stmts')


class IDVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_ID(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # one operation: name
                if node.name:
                    node.name = ''
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.ID.name')


class IdentifierTypeVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_IdentifierType(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # one operation: names
                if node.names:
                    node.names = ''
                    self.count += 1
                    deleterule.append(
                        'prune.pycparser.c_ast.IdentifierType.names')


class ParamListVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_ParamList(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # one operation: [['params']]
                if node.params:
                    print('the entire params of ParamList is ready to delete...')
                    node.params = []
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.ParamList.params')


class PtrDeclVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_PtrDecl(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # two operations: 'quals', ['type']
                if node.params:
                    print('the entire params in PtrDecl is ready to delete...')
                    node.params = None
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.PtrDecl.params')


class LabelVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Label(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # two operations: 'name'(error), ['stmt']
                if self.selectmutetype == 'prune.pycparser.c_ast.Label.stmt':
                    if node.stmt:
                        print('the entire stmt in Label is ready to delete...')
                        node.stmt = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.Label.stmt')


class ReturnVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Return(self, node):
        
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # one operations: ['expr']
                if self.selectmutetype == 'prune.pycparser.c_ast.Return.expr':
                    if node.expr:
                        print('the entire expr in Return is ready to delete...')
                        node.expr = None
                        self.count += 1
                        deleterule.append('prune.pycparser.c_ast.Return.expr')
                else:
                    print('the entire Return is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(node).splitlines()
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.Return')


class TypenameVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Typename(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # three operations: 'name', 'quals', ['type']
                if node.type:
                    print('the entire type in Typename is ready to delete...')
                    node.type = None
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.Typename.type')


class TypeDeclVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_TypeDecl(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # three operations: 'declname', 'quals', ['type']
                if self.selectmutetype == 'prune.pycparser.c_ast.TypeDecl.quals':
                    if node.quals:
                        node.quals = None
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.TypeDecl.quals')
                else:
                    if node.type:
                        print('the entire type in TypeDecl is ready to delete...')
                        node.type = None
                        self.count += 1
                        deleterule.append(
                            'prune.pycparser.c_ast.TypeDecl.type')


class UnaryOpVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_UnaryOp(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.op:
                    node.op = ''
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.UnaryOp.op')


class ConstantVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Constant(self, node):
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                self.count += 1
                # two operations: 'type', 'value'
                node = None
                deleterule.append('prune.pycparser.c_ast.Constant')


class ArrayDeclVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_ArrayDecl(self, node):
        
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if self.selectmutetype == 'prune.pycparser.c_ast.ArrayDecl.dim':
                    self.count += 1
                    node.dim = None
                    deleterule.append('prune.pycparser.c_ast.ArrayDecl.dim')
                else:
                    self.count += 1
                    node.dim_quals = None
                    deleterule.append(
                        'prune.pycparser.c_ast.ArrayDecl.dim_quals')


class BreakVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Break(self, node):
        if self.count < 1:
            global entirestructdelete
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                print('the entire break is ready to delete...')
                generatorcode = c_generator.CGenerator()
                entirestructdelete = generatorcode.visit(node).splitlines()
                print(str(entirestructdelete))
                self.count += 1
                deleterule.append('prune.pycparser.c_ast.Break')


class ContinueVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Continue(self, node):
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                print('the entire continue is ready to delete...')
                generatorcode = c_generator.CGenerator()
                entirestructdelete = generatorcode.visit(node).splitlines()
                print(str(entirestructdelete))
                self.count += 1
                deleterule.append('prune.pycparser.c_ast.Continue')


class FuncDefVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_FuncDef(self, node):
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                if node.body:
                    print('the entire body of FuncDef is ready to delete...')
                    generatorcode = c_generator.CGenerator()
                    entirestructdelete = generatorcode.visit(
                        node.body).splitlines()
                    del entirestructdelete[0]
                    del entirestructdelete[-1]
                    print(str(entirestructdelete))
                    self.count += 1
                    deleterule.append('prune.pycparser.c_ast.FuncDef.body')


class GotoVisitor(NodeVisitor):
    def __init__(self, selectmutetype):
        self.count = 0
        self.selectmutetype = selectmutetype

    def visit_Goto(self, node):
        global entirestructdelete
        if self.count < 1:
            flagdelete = random.randint(0, 1)
            if flagdelete == 1:
                # one operation: name
                print('the entire Goto is ready to delete...')
                generatorcode = c_generator.CGenerator()
                print(str(generatorcode.visit(node)))
                entirestructdelete = generatorcode.visit(node).splitlines()
                print(str(entirestructdelete))
                self.count += 1
                deleterule.append('prune.pycparser.c_ast.Goto')


class LabelVisitor1(NodeVisitor):
    def __init__(self):
        self.count = 0

    def visit_Label(self, node):
        pattern1 = re.compile("name=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            variablelist[decllist[0]] = 'Label'


class TypeDeclVisitor1(NodeVisitor):
    def __init__(self):
        self.count = 0

    def visit_TypeDecl(self, node):
        global variablelist
        # print('-----------------------')

        generatorcode = c_generator.CGenerator()
        deletelistcodeline = str(generatorcode.visit(node))
        # print(deletelistcodeline) #uint16_t
        pattern1 = re.compile("declname=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            # print(decllist[0])
            variablelist[decllist[0]] = deletelistcodeline
