# -*- coding: utf-8 -*
from __future__ import print_function
from __future__ import division
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
import time
import signal
import shutil
import math
import copy
import os.path
import numpy as np
import networkx as nx
import gmatch4py as gm

sys.path.extend(['.', '..'])


# replace
pypath = ''
filepaths = []
codesnippetpath = 'codesnippets/'
variablelist = {}

fake_libc_include_path = os.getcwd() + '/pycparser-master/utils/fake_libc_include'
parse_cmd = '-I' + fake_libc_include_path
sys.setrecursionlimit(100000)

iflist = [[]]
Assignment = [[]]
variablelist = {}
originalcode = []
count = 0

def create_necessary_folder(dir_path):
    if not os.path.exists(dir_path):
        os.makedirs(dir_path)

def extract(node, location):
    global count
    variable = {}
    namelistnew = []
    namelistnew1 = []
    generatorcode = c_generator.CGenerator()
    deletelistcodelinewhether = generatorcode.visit(node).splitlines()
    flagiscode = False
    for j in range(0, len(originalcode)):
        if deletelistcodelinewhether[0].replace(
                ' ',
                '') in originalcode[j].replace(
            ' ',
            ''):
            flagiscode = True
            break
    if flagiscode:
        deletelistcodeline = str(generatorcode.visit(node))
        comparestring = deletelistcodeline
        pattern = re.compile("name=\'(.*?)\'")
        namelist = pattern.findall(str(node))
        pattern1 = re.compile("declname=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            for i in range(len(decllist)):
                for j in range(len(namelist) - 1, -1, -1):
                    if namelist[j] == decllist[i]:
                        namelist.remove(decllist[i])
        #print('length of namelist is :' + str(len(namelist)))
        if len(namelist) <= 15:
        # if len(namelist) <= 15:
            # whether duplicate
            wordlist1 = re.split('[(\\[\\])&*;, ]', deletelistcodeline)
            for k in range(len(wordlist1)):
                for i in range(len(namelist)):
                    flag_variable = False
                    wordlist1_list = wordlist1[k].split('_')
                    if len(wordlist1_list) == 2 and wordlist1_list[0].isalpha(
                    ) and wordlist1_list[1].isdigit():
                        for h in range(0, len(wordlist1_list)):
                            if wordlist1_list[h] in deletelistcodeline:
                                flag_variable = True
                                break
                    elif len(wordlist1_list) == 2 and 'func' in wordlist1_list[0]:
                        for h in range(0, len(wordlist1_list)):
                            if wordlist1_list[h] in deletelistcodeline:
                                flag_variable = True
                                break
                    if flag_variable or wordlist1[k] == namelist[i]:
                        namelistnew1.append(wordlist1[k])

            wordlist = re.split('[()&*;+-, ]', deletelistcodeline)
            for k in range(len(wordlist)):
                for i in range(len(namelist)):
                    if wordlist[k].startswith(namelist[i]):
                        if wordlist[k] == (
                                namelist[i]) or wordlist[k].replace(
                            namelist[i],
                            '').startswith('.') or wordlist[k].replace(
                            namelist[i],
                            '').startswith('['):
                            if '[' in wordlist[k] and ']' not in wordlist[k]:
                                namelistnew.append(
                                    wordlist[k][:wordlist[k].index('[')])
                                namelistnew.append(
                                    wordlist[k][wordlist[k].index('[') + 1:])
                                break
                            else:
                                namelistnew.append(wordlist[k])
                                break
                    elif '][' in wordlist[k]:
                        subword = re.split('[][]', wordlist[k])
                        for m in range(len(subword)):
                            if subword[m] == (
                                    namelist[i]) or subword[m].replace(
                                namelist[i],
                                '').startswith('.') or subword[m].replace(
                                namelist[i],
                                '').startswith('['):
                                namelistnew.append(subword[m])
                                break

            for h in range(len(namelistnew)):
                comparestring = comparestring.replace(namelistnew[h], '')
            for g in range(len(wordlist)):
                if wordlist[g].isdigit() or wordlist[g].startswith('0x'):
                    comparestring = comparestring.replace(wordlist[g], '')
            for i in range(len(namelist)):
                if namelist[i] in variablelist.keys():
                    for b in range(len(namelistnew1)):
                        if namelist[i] in namelistnew1[b]:
                            variable[namelistnew1[b]] = variablelist[namelist[i]]
            single = True

            # [0]:instance #[1...]:variable type
            instance = []
            if len(iflist) != 1:
                for i in range(1, len(iflist)):
                    if comparestring == iflist[i][0]:
                        if len(variable) > 0 and len(iflist[i]) > 1:
                            for key in variable:
                                rename = False
                                for index_variable_type in range(
                                        1, len(iflist[i])):
                                    replace_type_list = variablelist[key].split(
                                        ' ')
                                    if replace_type_list[-1] in iflist[i][index_variable_type]:
                                        rename = True
                                        break
                                if rename:
                                    single = False
                                else:
                                    single = True
                                    break
                            if rename:
                                break
                        elif len(variable) == 0 and len(iflist[i]) == 1:
                            single = False
                            break
                        else:
                            continue
            if single:
                count += 1
                print('find a single code snippet, count is :' + str(count))
                instance.append(comparestring)
                if len(variable) > 0:
                    for key in variable:
                        instance.append(variable[key])
                iflist.append(instance)

                # iflist.append(comparestring)
                create_necessary_folder('codesnippets/' +
                           location + '/')
                f11 = open('codesnippets/' +
                           location + '/' + str(count) + '.c', 'a+')
                f11.write('//')
                for key in variable:
                    f11.write(key + ':' + variable[key] + '  ')
                f11.write('\n')
                f11.write(str(generatorcode.visit(node)))
                f11.close()
                if count > 10000:
                    exit(0)
            else:
                print('find a duplicate code snippet')


class TypeDeclVisitor(NodeVisitor):
    def __init__(self):
        self.count = 0

    def visit_TypeDecl(self, node):
        generatorcode = c_generator.CGenerator()
        deletelistcodeline = str(generatorcode.visit(node))
        pattern1 = re.compile("declname=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            variablelist[decllist[0]] = deletelistcodeline


class LabelVisitor(NodeVisitor):
    def __init__(self):
        self.count = 0

    def visit_Label(self, node):
        pattern1 = re.compile("name=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            variablelist[decllist[0]] = 'Label'


class IfVisitor(NodeVisitor):
    def visit_If(self, node):
        extract(node, 'If')


class AssignmentVisitor(NodeVisitor):
    def visit_Assignment(self, node):
        global count
        variable = {}
        namelistnew = []
        generatorcode = c_generator.CGenerator()
        deletelistcodeline = str(generatorcode.visit(node))
        comparestring = deletelistcodeline
        pattern = re.compile("name=\'(.*?)\'")
        namelist = pattern.findall(str(node))
        pattern1 = re.compile("declname=\'(.*?)\'")
        decllist = pattern1.findall(str(node))
        if len(decllist) != 0:
            for i in range(len(decllist)):
                for j in range(len(namelist) - 1, -1, -1):
                    if namelist[j] == decllist[i]:
                        namelist.remove(decllist[i])
        if len(namelist) <= 15:
            # whether duplicate
            wordlist = re.split('[()&*;, ]', deletelistcodeline)
            for k in range(len(wordlist)):
                for i in range(len(namelist)):
                    if wordlist[k].startswith(namelist[i]):
                        if wordlist[k] == (
                                namelist[i]) or wordlist[k].replace(
                            namelist[i],
                            '').startswith('.') or wordlist[k].replace(
                            namelist[i],
                            '').startswith('['):
                            if '[' in wordlist[k] and ']' not in wordlist[k]:
                                namelistnew.append(
                                    wordlist[k][:wordlist[k].index('[')])
                                namelistnew.append(
                                    wordlist[k][wordlist[k].index('[') + 1:])
                                break
                            else:
                                namelistnew.append(wordlist[k])
                                break
                    elif '][' in wordlist[k]:
                        subword = re.split('[][]', wordlist[k])
                        for m in range(len(subword)):
                            if subword[m] == (
                                    namelist[i]) or subword[m].replace(
                                namelist[i],
                                '').startswith('.') or subword[m].replace(
                                namelist[i],
                                '').startswith('['):
                                namelistnew.append(subword[m])
                                break
            for h in range(len(namelistnew)):
                comparestring = comparestring.replace(namelistnew[h], '')

            for g in range(len(wordlist)):
                if wordlist[g].isdigit() or wordlist[g].startswith('0x'):
                    comparestring = comparestring.replace(wordlist[g], '')

                # print('comparestring: '+comparestring)
            for i in range(len(namelist)):
                if namelist[i] in variablelist.keys():
                    for b in range(len(namelistnew)):
                        if namelist[i] in namelistnew[b]:
                            variable[namelistnew[b]
                            ] = variablelist[namelist[i]]
            single = True

            # [0]:instance #[1...]:variable type
            instance = []
            if len(iflist) != 1:
                for i in range(1, len(iflist)):
                    if comparestring == iflist[i][0]:
                        if len(variable) > 0 and len(iflist[i]) > 1:
                            for key in variable:
                                rename = False
                                for index_variable_type in range(
                                        1, len(iflist[i])):
                                    replace_type_list = variablelist[key].split(
                                        ' ')
                                    if replace_type_list[-1] in iflist[i][index_variable_type]:
                                        rename = True
                                        break
                                if rename:
                                    single = False
                                else:
                                    single = True
                                    break
                            if rename:
                                break
                        elif len(variable) == 0 and len(iflist[i]) == 1:
                            single = False
                            break
                        else:
                            continue
            if single:
                count += 1
                print('find a single code snippet, count is :' + str(count))
                instance.append(comparestring)
                if len(variable) > 0:
                    for key in variable:
                        instance.append(variable[key])
                iflist.append(instance)

                # iflist.append(comparestring)
                f11 = open(
                    'codesnippets/Assignment/' +
                    str(count) +
                    '.c',
                    'a+')
                f11.write('//')
                for key in variable:
                    f11.write(key + ':' + variable[key] + '  ')
                f11.write('\n')
                f11.write(str(generatorcode.visit(node)))
                f11.close()
                if count > 10000:
                    exit(0)
            else:
                print('find a duplicate code snippet')


class SwitchVisitor(NodeVisitor):
    def visit_Switch(self, node):
        extract(node, 'Switch')


class WhileVisitor(NodeVisitor):
    def visit_While(self, node):
        extract(node, 'While')


class ForVisitor(NodeVisitor):
    def visit_For(self, node):
        extract(node, 'For')


class FuncDefVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        extract(node, 'FuncDef')


class GotoVisitor(NodeVisitor):
    def visit_Goto(self, node):
        extract(node, 'Goto')


class ReturnVisitor(NodeVisitor):
    def visit_Return(self, node):
        extract(node, 'Return')


def read_coverage(coveragepath):
    listcoverage = []
    with open(coveragepath, 'r') as fcoverage:
        listcoverage = fcoverage.readlines()
    return listcoverage


def all_files_path(rootDir, filepaths):
    for root, dirs, files in os.walk(rootDir):
        for file in files:
            file_path = os.path.join(root, file)
            filepaths.append(file_path)
        for dir in dirs:
            dir_path = os.path.join(root, dir)
            all_files_path(dir_path, filepaths)


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
    f = open(writepath, 'w+')
    f.write(str(result_str))
    f.close()


def whethererror(rewritepath):
    flagcrash = False
    f = open(rewritepath)
    lines = f.readlines()
    for j in range(len(lines)):
        if 'error' in lines[j]:
            flagcrash = True
    f.close()
    return flagcrash


def del_file(path):
    ls = os.listdir(path)
    for i in ls:
        c_path = os.path.join(path, i)
        if os.path.isdir(c_path):
            del_file(c_path)
        else:
            os.remove(c_path)


if __name__ == "__main__":
    start = datetime.datetime.now()
    count0 = 0
    filepaths = []
    testcases_path = sys.argv[1]
    if not os.path.exists(testcases_path):
        print('testcases path error, please choose new')
        exit()
    all_files_path(testcases_path, filepaths)
    create_necessary_folder('./compile/')
    for filepath in filepaths:
        count0 = count0 + 1
        print('**********the file name is **********' + filepath)
        cmd1 = 'gcc -c ' + filepath
        realnamelist = filepath.split('/')
        realname = realnamelist[len(realnamelist) - 1]
        realnamepure = realname[:realname.index('.')]
        rewritepath1 = './compile/' + realname + '.txt'
        run_cmd_save_errorInformation(cmd1, rewritepath1)
        flagerror1 = whethererror(rewritepath1)
        del_file('./compile/')
        if os.path.exists('./' + realnamepure + '.o'):
            os.remove('./' + realnamepure + '.o')
        if flagerror1:
            print('program error')

        else:
            originalcode = read_coverage(filepath)
            astnew = parse_file(
                filepath, use_cpp=True, cpp_path='gcc', cpp_args=['-E', r'' + parse_cmd])
            variablelist.clear()
            nodevisit = TypeDeclVisitor()
            nodevisit.visit(astnew.ext)
            nodevisit1 = LabelVisitor()
            nodevisit1.visit(astnew.ext)
            for key in variablelist.keys():
                if key.startswith('func_') or key.startswith('loop_func'):
                    for t in range(0, len(originalcode)):
                        if key in originalcode[t]:
                            if ',' in originalcode[t]:
                                para = originalcode[t].split(',')
                                variablelist[key] = str(len(para))
                            else:
                                variablelist[key] = '0'
                            break
                else:
                    if '_' in key:
                        keylist = key.split('_')
                        if len(keylist) == 2 and keylist[0].isalpha(
                        ) and keylist[1].isdigit():
                            for t in range(0, len(originalcode)):
                                if key in originalcode[t]:
                                    substring1 = originalcode[t][:originalcode[t].index(
                                        key)]
                                    numberptr = substring1.count('*')
                                    realptr = ''
                                    if numberptr != 0:
                                        for u in range(0, numberptr):
                                            realptr = realptr + '*'
                                    variablelist[key] = variablelist[key] + realptr
                                    substring1 = originalcode[t][originalcode[t].index(
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

            selectdelete = sys.argv[2]
            if selectdelete == 'If':
                nodevisit = IfVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'Assignment':
                nodevisit = AssignmentVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'Switch':
                nodevisit = SwitchVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'While':
                nodevisit = WhileVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'For':
                nodevisit = ForVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'FuncDef':
                nodevisit = FuncDefVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'Goto':
                nodevisit = GotoVisitor()
                nodevisit.visit(astnew.ext)
            elif selectdelete == 'Return':
                nodevisit = ReturnVisitor()
                nodevisit.visit(astnew.ext)
            else:
                print('snippet name error!')
                exit()
            originalcode = []
    shutil.rmtree('./compile')
    end = datetime.datetime.now()
    print(str(end - start))
