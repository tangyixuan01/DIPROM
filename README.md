Welcome to the homepage of DIPROM, the first effort leveraging the mutation based approach for compiler warning testing!

## Requirements
We recommend using CONDA to configure your environment
* python 3.6
```bash
pip install numpy networkx pycparser cython
```
* java 11
```bash
sudo apt install openjdk-11-jdk
```

- gmatch4py
```bash
git clone https://github.com/Jacobe2169/GMatch4py.git
cd GMatch4py
(sudo) pip(3) install .
```
If you encounter this error
```bash
from .embedding.deepwalk import *
  File "gmatch4py/embedding/deepwalk.pyx", line 31, in init gmatch4py.embedding.deepwalk
ModuleNotFoundError: No module named 'skipgram'
```
You can comment gmatch4py/__init__.py out
```python
# in line 15 of gmatch4py/__init__.py
# from .embedding.deepwalk import *
```

- compiler
```bash
apt-get install gcc-4.7 gcc-4.8 clang-3.6 clang-3.9
```

## Usage
Before running the fuzzer, we need to collect the code snippets that are required for the inserting operation:

```bash
python extract_snippet.py testcases_path extract_mode
```
testcases_path is the path of test programs that are used to collect code snippets for insertion.

extract_mode includes 
- - If
  - Assignment
  - Switch
  - While
  - For
  - FuncDef
  - Goto
  - Return
   
The code snippets will be extracted at the direction ./codesnippets/.
    
After the collection of code snippets, please run main.py to detect compiler waring defects:
```bash
python main.py testcases_path fuzz_mode
```
testcases_path is the path of test programs that are mutated to generate program variants for compiler warning testing.

fuzz_mode includes 
- - gcc_ccs
  - gcc_cvs
  - gcc_cos
  - clang_ccs
  - clang_cvs

