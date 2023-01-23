# ALX Team project 
*by Obiora Daniel and Nwafor Emmanuel*
- printf \
Fuction that prints formated string to stdout
## About

Prototype: ``int _printf(const char *format, ...);``

Write output to stdout, the standard output stream.

Returns: the number of characters printed (excluding the null byte used to end output to strings)

It can handle the following Specifiers:
- c
- s
- %
- d
- i

## How to Compile

Add a file ``main.c`` to the folder that has the main fuction that calls our function ``_printf(char *format, ...)``

Run the following command in your terminal:

``
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c``

Then run the output ``a.out`` file
