#ifndef PRINTF_H
#define PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<stddef.h>

void _putchar(char);
typedef struct spec
{
	char *sp;
	void (*f)(va_list *list, int *n);
} spec_op;

void (*get_specifier(char s))(va_list*, int*);
void spec_c(va_list*, int*);
void spec_s(va_list*, int*);
void spec_per(va_list*, int *);

int _printf(const char *format, ...);

#endif /* PRINTF_H */