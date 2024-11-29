
								Project _printf function 


The aim of this project is to create our own printf function for the Holberton school , it can handle 5 specifiers :
Symbol	Operation
c	Prints character
s	Prints string
%	Prints modulus operator
d	Prints integer
i	Also prints integer

This project is an educational exercise to demonstrate:

Understanding of variadic functions.
Custom parsing of format specifiers.
Implementation of modular and reusable code in C.



## Documentation

[Documentation](//github.com/georges479/holbertonschool-printf.git)

#Requirements

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).
 We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file

All your header files should be include guarded

Note that we will not provide the _putchar function for this project

#ENVIRONEMENT USE 

operating system : Ubuntu 20.04

Language : C 

Compiler : gcc 4.8.4

Style Guidelines : Betty 

#TASKS 

we had 3 tasks to do from 0-2:

TASK 0 : 

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to 
strings)

write output to stdout, the standard output stream

format is a character string. The format string is composed of zero or more directives.

See man 3 printf for more detail. You need to handle the following conversion specifiers:

c

s

%

You don’t have to reproduce the buffer handling of the C library printf function

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

TASK 1 : 

Handle the following conversion specifiers:

d

i

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

TASK 2 : 

Create a man page for your function.

#INSTALL

to install it you need to clone our repo : git clone ://github.com/georges479/holbertonschool-printf.git 

then to use it for c , s , %  you should use our file printf.c

you should use our main.c aswell 

#COMPILE 

you should compile like this :  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o C*

#EXECUTE

./printf.c




## Authors

//github.com/georges479/holbertonschool-printf.git 

Nordine Ounissi

Nils Ineichen

Georges Menheim


## Flowchart

https://files.slack.com/files-pri/T0423U1MW21-F0838F8DB33/capture_d___e__cran_2024-11-28_a___13.18.39.png



