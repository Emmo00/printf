#include"printf.h"
/**
 * _printf - prints formated string to stdout
 * @format - format string
 * Return: number of characters printed to stdout
*/
int _printf(const char *format, ...)
{
	int i, n;
	va_list args;

	i = 0;
	n = 0;
	va_start(args, format);
	while(format[i])
	{
		if (format[i] != '%' && format[i - 1] != '%')
		{
			_putchar(format[i]);
			n++;
		}
		else
		{
			if (format[i] == '%' && format[i - 1] != '%')
			{
				continue;
			}
			get_specifier(format[i])(&args, &n);
		}
		i++;
	}
	return (n);
}