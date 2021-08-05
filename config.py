# -*- coding: utf-8 -*
from __future__ import division
from __future__ import print_function
from pycparser import parse_file, c_generator
from pycparser.c_ast import NodeVisitor
from random import choice

import sys
import random
import os
import shutil
import gc
import subprocess
import datetime
import re
import time as t
import signal
import shutil
import math
import copy
import os.path
import numpy as np
import networkx as nx
import gmatch4py as gm

fake_libc_include_path = os.getcwd() + '/pycparser-master/utils/fake_libc_include'
parse_cmd = '-I' + fake_libc_include_path

# replace
pypath = ''
resultpath = 'programsInformation/'
warningfile = 'warningdefects.txt'
timefile = 'testcasetime.txt'
codesnippetpath = './codesnippets/'
single_defects = ['']

raterule = {'prune.pycparser.c_ast.If': 0,
            'prune.pycparser.c_ast.If.iftrue': 0,
            'prune.pycparser.c_ast.If.iffalse': 0,
            'prune.pycparser.c_ast.TernaryOp.cond': 0,
            'prune.pycparser.c_ast.TernaryOp.iftrue': 0,
            'prune.pycparser.c_ast.TernaryOp.iffalse': 0,
            'prune.pycparser.c_ast.Decl.quals': 0,
            'prune.pycparser.c_ast.Decl.storage': 0,
            'prune.pycparser.c_ast.Decl.funcspec': 0,
            'prune.pycparser.c_ast.Decl.init': 0,
            'prune.pycparser.c_ast.Decl.bitsize': 0,
            'prune.pycparser.c_ast.BinaryOp': 0,
            'prune.pycparser.c_ast.Assignment.op': 0,
            'prune.pycparser.c_ast.Assignment': 0,
            'prune.pycparser.c_ast.Compound.block_items': 0,
            'prune.pycparser.c_ast.CompoundLiteral.init': 0,
            'prune.pycparser.c_ast.Default.stmts': 0,
            'prune.pycparser.c_ast.Default': 0,
            'prune.pycparser.c_ast.Switch': 0,
            'prune.pycparser.c_ast.Switch.stmt': 0,
            'prune.pycparser.c_ast.While': 0,
            'prune.pycparser.c_ast.While.stmt': 0,
            'prune.pycparser.c_ast.ExprList.exprs': 0,
            'prune.pycparser.c_ast.InitList.exprs': 0,
            'prune.pycparser.c_ast.FileAST.ext': 0,
            'prune.pycparser.c_ast.For.init': 0,
            'prune.pycparser.c_ast.For.cond': 0,
            'prune.pycparser.c_ast.For.next': 0,
            'prune.pycparser.c_ast.For.stmt': 0,
            'prune.pycparser.c_ast.For': 0,
            'prune.pycparser.c_ast.FuncDecl.args': 0,
            'prune.pycparser.c_ast.FuncDecl.type': 0,
            'prune.pycparser.c_ast.FuncDecl': 0,
            'prune.pycparser.c_ast.Case': 0,
            'prune.pycparser.c_ast.Case.stmts': 0,
            'prune.pycparser.c_ast.ID.name': 0,
            'prune.pycparser.c_ast.IdentifierType.names': 0,
            'prune.pycparser.c_ast.ParamList.params': 0,
            'prune.pycparser.c_ast.PtrDecl.quals': 0,
            'prune.pycparser.c_ast.Label.stmt': 0,
            'prune.pycparser.c_ast.Return.expr': 0,
            'prune.pycparser.c_ast.Return': 0,
            'prune.pycparser.c_ast.Typename.type': 0,
            'prune.pycparser.c_ast.TypeDecl.quals': 0,
            'prune.pycparser.c_ast.TypeDecl.type': 0,
            'prune.pycparser.c_ast.UnaryOp.op': 0,
            'prune.pycparser.c_ast.Constant': 0,
            'prune.pycparser.c_ast.ArrayDecl.dim': 0,
            'prune.pycparser.c_ast.ArrayDecl.dim_quals': 0,
            'prune.pycparser.c_ast.Continue': 0,
            'prune.pycparser.c_ast.Break': 0,
            'prune.pycparser.c_ast.FuncDef.body': 0,
            'prune.pycparser.c_ast.Goto': 0,
            'insert.pycparser.c_ast.Assignment': 0,
            'insert.pycparser.c_ast.Break': 0,
            'insert.pycparser.c_ast.Continue': 0,
            'insert.pycparser.c_ast.For': 0,
            'insert.pycparser.c_ast.Goto': 0,
            'insert.pycparser.c_ast.If': 0,
            'insert.pycparser.c_ast.Return': 0,
            'insert.pycparser.c_ast.Switch': 0,
            'insert.pycparser.c_ast.While': 0,
            'insert.pycparser.c_ast.FuncDef': 0}
rateruleapplycount = {'prune.pycparser.c_ast.If': 0,
                      'prune.pycparser.c_ast.If.iftrue': 0,
                      'prune.pycparser.c_ast.If.iffalse': 0,
                      'prune.pycparser.c_ast.TernaryOp.cond': 0,
                      'prune.pycparser.c_ast.TernaryOp.iftrue': 0,
                      'prune.pycparser.c_ast.TernaryOp.iffalse': 0,
                      'prune.pycparser.c_ast.Decl.quals': 0,
                      'prune.pycparser.c_ast.Decl.storage': 0,
                      'prune.pycparser.c_ast.Decl.funcspec': 0,
                      'prune.pycparser.c_ast.Decl.init': 0,
                      'prune.pycparser.c_ast.Decl.bitsize': 0,
                      'prune.pycparser.c_ast.BinaryOp': 0,
                      'prune.pycparser.c_ast.Assignment.op': 0,
                      'prune.pycparser.c_ast.Assignment': 0,
                      'prune.pycparser.c_ast.Compound.block_items': 0,
                      'prune.pycparser.c_ast.CompoundLiteral.init': 0,
                      'prune.pycparser.c_ast.Default.stmts': 0,
                      'prune.pycparser.c_ast.Default': 0,
                      'prune.pycparser.c_ast.Switch': 0,
                      'prune.pycparser.c_ast.Switch.stmt': 0,
                      'prune.pycparser.c_ast.While': 0,
                      'prune.pycparser.c_ast.While.stmt': 0,
                      'prune.pycparser.c_ast.ExprList.exprs': 0,
                      'prune.pycparser.c_ast.InitList.exprs': 0,
                      'prune.pycparser.c_ast.FileAST.ext': 0,
                      'prune.pycparser.c_ast.For.init': 0,
                      'prune.pycparser.c_ast.For.cond': 0,
                      'prune.pycparser.c_ast.For.next': 0,
                      'prune.pycparser.c_ast.For.stmt': 0,
                      'prune.pycparser.c_ast.For': 0,
                      'prune.pycparser.c_ast.FuncDecl.args': 0,
                      'prune.pycparser.c_ast.FuncDecl.type': 0,
                      'prune.pycparser.c_ast.FuncDecl': 0,
                      'prune.pycparser.c_ast.Case': 0,
                      'prune.pycparser.c_ast.Case.stmts': 0,
                      'prune.pycparser.c_ast.ID.name': 0,
                      'prune.pycparser.c_ast.IdentifierType.names': 0,
                      'prune.pycparser.c_ast.ParamList.params': 0,
                      'prune.pycparser.c_ast.PtrDecl.quals': 0,
                      'prune.pycparser.c_ast.Label.stmt': 0,
                      'prune.pycparser.c_ast.Return.expr': 0,
                      'prune.pycparser.c_ast.Return': 0,
                      'prune.pycparser.c_ast.Typename.type': 0,
                      'prune.pycparser.c_ast.TypeDecl.quals': 0,
                      'prune.pycparser.c_ast.TypeDecl.type': 0,
                      'prune.pycparser.c_ast.UnaryOp.op': 0,
                      'prune.pycparser.c_ast.Constant': 0,
                      'prune.pycparser.c_ast.ArrayDecl.dim': 0,
                      'prune.pycparser.c_ast.ArrayDecl.dim_quals': 0,
                      'prune.pycparser.c_ast.Continue': 0,
                      'prune.pycparser.c_ast.Break': 0,
                      'prune.pycparser.c_ast.FuncDef.body': 0,
                      'prune.pycparser.c_ast.Goto': 0,
                      'insert.pycparser.c_ast.Assignment': 0,
                      'insert.pycparser.c_ast.Break': 0,
                      'insert.pycparser.c_ast.Continue': 0,
                      'insert.pycparser.c_ast.For': 0,
                      'insert.pycparser.c_ast.Goto': 0,
                      'insert.pycparser.c_ast.If': 0,
                      'insert.pycparser.c_ast.Return': 0,
                      'insert.pycparser.c_ast.Switch': 0,
                      'insert.pycparser.c_ast.While': 0,
                      'insert.pycparser.c_ast.FuncDef': 0}
raterulesuccesscount = {'prune.pycparser.c_ast.If': 0,
                        'prune.pycparser.c_ast.If.iftrue': 0,
                        'prune.pycparser.c_ast.If.iffalse': 0,
                        'prune.pycparser.c_ast.TernaryOp.cond': 0,
                        'prune.pycparser.c_ast.TernaryOp.iftrue': 0,
                        'prune.pycparser.c_ast.TernaryOp.iffalse': 0,
                        'prune.pycparser.c_ast.Decl.quals': 0,
                        'prune.pycparser.c_ast.Decl.storage': 0,
                        'prune.pycparser.c_ast.Decl.funcspec': 0,
                        'prune.pycparser.c_ast.Decl.init': 0,
                        'prune.pycparser.c_ast.Decl.bitsize': 0,
                        'prune.pycparser.c_ast.BinaryOp': 0,
                        'prune.pycparser.c_ast.Assignment.op': 0,
                        'prune.pycparser.c_ast.Assignment': 0,
                        'prune.pycparser.c_ast.Compound.block_items': 0,
                        'prune.pycparser.c_ast.CompoundLiteral.init': 0,
                        'prune.pycparser.c_ast.Default.stmts': 0,
                        'prune.pycparser.c_ast.Default': 0,
                        'prune.pycparser.c_ast.Switch': 0,
                        'prune.pycparser.c_ast.Switch.stmt': 0,
                        'prune.pycparser.c_ast.While': 0,
                        'prune.pycparser.c_ast.While.stmt': 0,
                        'prune.pycparser.c_ast.ExprList.exprs': 0,
                        'prune.pycparser.c_ast.InitList.exprs': 0,
                        'prune.pycparser.c_ast.FileAST.ext': 0,
                        'prune.pycparser.c_ast.For.init': 0,
                        'prune.pycparser.c_ast.For.cond': 0,
                        'prune.pycparser.c_ast.For.next': 0,
                        'prune.pycparser.c_ast.For.stmt': 0,
                        'prune.pycparser.c_ast.For': 0,
                        'prune.pycparser.c_ast.FuncDecl.args': 0,
                        'prune.pycparser.c_ast.FuncDecl.type': 0,
                        'prune.pycparser.c_ast.FuncDecl': 0,
                        'prune.pycparser.c_ast.Case': 0,
                        'prune.pycparser.c_ast.Case.stmts': 0,
                        'prune.pycparser.c_ast.ID.name': 0,
                        'prune.pycparser.c_ast.IdentifierType.names': 0,
                        'prune.pycparser.c_ast.ParamList.params': 0,
                        'prune.pycparser.c_ast.PtrDecl.quals': 0,
                        'prune.pycparser.c_ast.Label.stmt': 0,
                        'prune.pycparser.c_ast.Return.expr': 0,
                        'prune.pycparser.c_ast.Return': 0,
                        'prune.pycparser.c_ast.Typename.type': 0,
                        'prune.pycparser.c_ast.TypeDecl.quals': 0,
                        'prune.pycparser.c_ast.TypeDecl.type': 0,
                        'prune.pycparser.c_ast.UnaryOp.op': 0,
                        'prune.pycparser.c_ast.Constant': 0,
                        'prune.pycparser.c_ast.ArrayDecl.dim': 0,
                        'prune.pycparser.c_ast.ArrayDecl.dim_quals': 0,
                        'prune.pycparser.c_ast.Continue': 0,
                        'prune.pycparser.c_ast.Break': 0,
                        'prune.pycparser.c_ast.FuncDef.body': 0,
                        'prune.pycparser.c_ast.Goto': 0,
                        'insert.pycparser.c_ast.Assignment': 0,
                        'insert.pycparser.c_ast.Break': 0,
                        'insert.pycparser.c_ast.Continue': 0,
                        'insert.pycparser.c_ast.For': 0,
                        'insert.pycparser.c_ast.Goto': 0,
                        'insert.pycparser.c_ast.If': 0,
                        'insert.pycparser.c_ast.Return': 0,
                        'insert.pycparser.c_ast.Switch': 0,
                        'insert.pycparser.c_ast.While': 0,
                        'insert.pycparser.c_ast.FuncDef': 0}

classinserttype1 = [
    'insert.pycparser.c_ast.Assignment',
    'insert.pycparser.c_ast.For',
    'insert.pycparser.c_ast.FuncDef',
    'insert.pycparser.c_ast.Goto',
    'insert.pycparser.c_ast.If',
    'insert.pycparser.c_ast.Return',
    'insert.pycparser.c_ast.Switch',
    'insert.pycparser.c_ast.While']

classinserttype2 = [
    'insert.pycparser.c_ast.Break',
    'insert.pycparser.c_ast.Continue']

warningflag = set()
deleterule = []
insertrule = []
nodelist = []
uncompilable = []
mutatetypeapply = []
variablelist = {}
global_variable = {}
global_function = {}
allcompilablecout = 0
uncompilablecount = 0
seedtestcount = 0
inlinefunction = []
entirestructdelete = []
selectfunctionfile = ''
flagreselectmutatedtype = False
