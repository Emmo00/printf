#include"printf.h"
/**
 * spec_c - handles the c specifier
 * @args: variable list
 * @n: pointer to variable that tracks number of characters printed
 * Return: nothing
*/
void spec_c(va_list *args, int *n)
{
	_putchar(va_arg(*args, char));
	*n++;
}
/**
 * spec_c - handles the s specifier
 * @args: variable list
 * @n: pointer to variable that tracks number of characters printed
 * Return: nothing
*/
void spec_s(va_list *args, int *n)
{
	char *str = va_arg(*args, char*);
	while (str)
	{
		_putchar(*str++);
		*n++;
	}
}
/**
 * spec_c - handles the % specifier
 * @args: variable list
 * @n: pointer to variable that tracks number of characters printed
 * Return: nothing
*/
void spec_per(va_list *args, int *n)
{
	_putchar("%");
	*n++;
}