# What are all those files doing exaclty?
> Well, you asked for it. So here we go...

| **FILE-NAMES** | **DESCRIPTIONS** | CONTENTS
| `0-preprocessor` | Write a script that runs a C file through the preprocessor and save the result into another file | ```#!/bin/bash
gcc -E $CFILE -o c```
| `1-compiler` | Write a script that compiles a C file but does not link. | ```#!/bin/bash
gcc -c $CFILE```

