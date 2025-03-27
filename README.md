![Capture d'écran 2025-03-26 124222](https://github.com/user-attachments/assets/03626dc1-2fea-40ba-aaa9-da0e80c338cd)



# Custom _printf Function Implementation

## Overview
This project implements a custom `_printf` function, mimicking the behavior of the standard C library `printf` function with a subset of format specifiers.

## Features
 Support for multiple format specifiers
 Variable argument handling
 Robust error checking
 Lightweight implementation
 
## Supported Format Specifiers
 `%c`: Character printing
 `%s`: String printing
 `%%`: Percent sign printing
 `%d`: Decimal integer
 `%i`: Integer

## Function Prototype
```c
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *s);
int print_char(char c);
int print_num(int n);

## Key Components
 Main `_printf` function
 Helper print functions for each specifier
 Variable argument list management

## Usage Examples
```c
_printf("Hello, %s!\n", "world");        
_printf("Character: %c\n", 'A');         
_printf("Integer: %d\n", 42);            
_printf("Percent sign: %%\n");         
```

## Error Handling
 Returns `-1` if format string is `NULL`
 Handles unrecognized specifiers by printing them literally
## install
to install it you need to clone our repo : git clone ://github.com/georges479/holbertonschool-printf.git

## Compilation

gcc -Wall -Werror -Wextra -pedantic *.c -o printf

## Execute
./printf.c 

## Dependencies
 <stdarg.h>` for variable argument handling
Custom helpe1r functions: 
   `_putchar()`
   `print_char()`
   `print_string()`
   `print_num()`

## Limitations
 Limited to specified format specifiers
 No floating-point number support
 Minimal error checking compared to standard `printf`

## Potential Improvements
 Add more format specifiers
 Implement width and precision modifiers
 Enhanced error handling
 Support for floating-point numbers

## Environment use 
operating system : Ubuntu 20.04
Language : C 
Compiler : gcc 4.8.4
Style Guidelines : Betty 


## Authors
Georges
Nils
Lentz
```

The README provides a comprehensive overview of the custom `_printf` implementation, including its features, usage, compilation instructions, and potential areas for improvement. It serves as a guide for developers who want to understand or contribute to the project.
