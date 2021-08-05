from config import *
from ultis.mutate import coverage


class IfVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.presentnodetype = presentnodetype
    	
    def visit_If(self, node):
        if node:
            self.presentnodetype.append('prune.pycparser.c_ast.If')
            if node.iftrue:
                self.presentnodetype.append('prune.pycparser.c_ast.If.iftrue')
            if node.iffalse:
                self.presentnodetype.append('prune.pycparser.c_ast.If.iffalse')


class TernaryOpVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_TernaryOp(self, node):
        if self.count < 1:
            self.count += 1
            if node.cond:
                self.presentnodetype.append('prune.pycparser.c_ast.TernaryOp.cond')
            if node.iftrue:
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.TernaryOp.iftrue')
            if node.iffalse:
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.TernaryOp.iffalse')


class DeclVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.presentnodetype = presentnodetype

    def visit_Decl(self, node):
        generatorcode = c_generator.CGenerator()
        deletelistcodeline = generatorcode.visit(node).splitlines()
        flag = coverage(deletelistcodeline)
        if flag:
            if node.quals:
                self.presentnodetype.append('prune.pycparser.c_ast.Decl.quals')
            if node.storage:
                self.presentnodetype.append('prune.pycparser.c_ast.Decl.storage')
            if node.funcspec:
                self.presentnodetype.append('prune.pycparser.c_ast.Decl.funcspec')
            if node.init:
                self.presentnodetype.append('prune.pycparser.c_ast.Decl.init')
            if node.bitsize:
                self.presentnodetype.append('prune.pycparser.c_ast.Decl.bitsize')


class BinaryOpVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_BinaryOp(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.BinaryOp')


class AssignmentVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Assignment(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Assignment')
                if node.op:
                    self.presentnodetype.append(
                        'prune.pycparser.c_ast.Assignment.op')


class CompoundVisitor_count(NodeVisitor):
    # one operation:[[block_items]]
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Compound(self, node):
        if self.count < 1:
            if node.block_items:
                self.count += 1
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.Compound.block_items')


class CompoundLiteralVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_CompoundLiteral(self, node):
        if self.count < 1:
            if node.init:
                self.count += 1
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.CompoundLiteral.init')


class DefaultVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Default(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Default')
                if node.stmts:
                    self.presentnodetype.append(
                        'prune.pycparser.c_ast.Default.stmts')


class SwitchVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Switch(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Switch')
                if node.cond:
                    self.presentnodetype.append('prune.pycparser.c_ast.Switch.cond')
                if node.stmt:
                    self.presentnodetype.append('prune.pycparser.c_ast.Switch.stmt')


class WhileVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_While(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.While')
                if node.stmt:
                    self.presentnodetype.append('prune.pycparser.c_ast.While.stmt')


class ExprListVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_ExprList(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                if node.exprs:
                    self.presentnodetype.append(
                        'prune.pycparser.c_ast.ExprList.exprs')


class InitListVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_InitList(self, node):
        if self.count < 1:
            if node.exprs:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.InitList.exprs')


class FileASTVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_FileAST(self, node):
        if self.count < 1:
            if node.ext:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.FileAST.ext')


class ForVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.presentnodetype = presentnodetype

    def visit_For(self, node):
        if node:
            self.presentnodetype.append('prune.pycparser.c_ast.For')
            if node.init:
                self.presentnodetype.append('prune.pycparser.c_ast.For.init')
            if node.cond:
                self.presentnodetype.append('prune.pycparser.c_ast.For.cond')
            if node.next:
                self.presentnodetype.append('prune.pycparser.c_ast.For.next')
            if node.stmt:
                self.presentnodetype.append('prune.pycparser.c_ast.For.stmt')


class FuncDeclVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.presentnodetype = presentnodetype

    def visit_FuncDecl(self, node):
        if node:
            self.presentnodetype.append('prune.pycparser.c_ast.FuncDecl')
            if node.args:
                self.presentnodetype.append('prune.pycparser.c_ast.FuncDecl.args')
            if node.type:
                self.presentnodetype.append('prune.pycparser.c_ast.FuncDecl.type')


class CaseVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Case(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Case')
                if node.stmts:
                    self.presentnodetype.append('prune.pycparser.c_ast.Case.stmts')


class IDVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_ID(self, node):
        if self.count < 1:
            if node.name:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.ID.name')


class IdentifierTypeVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_IdentifierType(self, node):
        if self.count < 1:
            if node.names:
                self.count += 1
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.IdentifierType.names')


class ParamListVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_ParamList(self, node):
        if self.count < 1:
            if node.params:
                self.count += 1
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.ParamList.params')


class PtrDeclVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_PtrDecl(self, node):
        if self.count < 1:
            if node.quals:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.PtrDecl.quals')


class LabelVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Label(self, node):
        if self.count < 1:
            if node.stmt:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Label.stmt')


class ReturnVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Return(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Return')
                if node.expr:
                    self.presentnodetype.append('prune.pycparser.c_ast.Return.expr')


class TypenameVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Typename(self, node):
        if self.count < 1:
            if node.type:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Typename.type')


class TypeDeclVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_TypeDecl(self, node):
        if self.count < 1:
            self.count += 1
            if node.quals:
                self.presentnodetype.append('prune.pycparser.c_ast.TypeDecl.quals')
            if node.type:
                self.presentnodetype.append('prune.pycparser.c_ast.TypeDecl.type')


class UnaryOpVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_UnaryOp(self, node):
        if self.count < 1:
            if node.op:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.UnaryOp.op')


class ConstantVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Constant(self, node):
        if self.count < 1:
            self.count += 1
            self.presentnodetype.append('prune.pycparser.c_ast.Constant')


class ArrayDeclVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_ArrayDecl(self, node):
        if self.count < 1:
            self.count += 1
            if node.dim:
                self.presentnodetype.append('prune.pycparser.c_ast.ArrayDecl.dim')
            if node.dim_quals:
                self.presentnodetype.append(
                    'prune.pycparser.c_ast.ArrayDecl.dim_quals')


class ContinueVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Continue(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Continue')


class BreakVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Break(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Break')


class FuncDefVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_FuncDef(self, node):
        if self.count < 1:
            if node.body:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.FuncDef.body')


class GotoVisitor_count(NodeVisitor):
    def __init__(self, presentnodetype):
        self.count = 0
        self.presentnodetype = presentnodetype

    def visit_Goto(self, node):
        if self.count < 1:
            if node:
                self.count += 1
                self.presentnodetype.append('prune.pycparser.c_ast.Goto')


def determinenodetype(astnew1, presentnodetype):

    nodevisit = IfVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = TernaryOpVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = DeclVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = BinaryOpVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = AssignmentVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = CompoundVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = CompoundLiteralVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = DefaultVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = SwitchVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = WhileVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ExprListVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = InitListVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = FileASTVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ForVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = FuncDeclVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = CaseVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = IDVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = IdentifierTypeVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ParamListVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = PtrDeclVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = LabelVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ReturnVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = TypeDeclVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = TypenameVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = UnaryOpVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ConstantVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ArrayDeclVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = ContinueVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = BreakVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = FuncDefVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    nodevisit = GotoVisitor_count(presentnodetype)
    nodevisit.visit(astnew1.ext)

    return presentnodetype
