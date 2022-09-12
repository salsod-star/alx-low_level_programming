# What are all those files doing exaclty?
> Well, you asked for it. So here we go...
------------------------------
The **CONTENT** field where you see "Check the content" contains lines of code so the file needs to be opened for details

| **FILE-NAMES** | **DESCRIPTIONS** | **CONTENTS**
| --- | --- | ---
| `0-preprocessor` | Write a script that runs a C file through the preprocessor and save the result into another file | `gcc -E $CFILE -o c`
| `1-compiler` | Write a script that compiles a C file but does not link. | `#!/bin/bash \ngcc -c $CFILE`
| `2-assembler` | Write a script that generates the assembly code of a C code and save it in an output file. | `gcc $CFILE -S`
| `3-name` | Write a script that compiles a C file and creates an executable named cisfun. | `gcc $CFILE -o cisfun`
| `4-puts.c` | Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line. | **Check the content**
| `5-printf.c` | Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. | **check the content**
| `6-size.c` | Write a C program that prints the size of various types on the computer it is compiled and run on. | **Check the content**
| `100-intel` | Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. | `gcc -S -masm=intel $CFILE`
| `101-quote.c` | Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. | **Check the content**
