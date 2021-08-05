
## Note
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
   
The code snippets will be extracted here.
