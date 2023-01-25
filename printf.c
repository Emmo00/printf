#include"main.h"
/**
 * _printf - prints formated string to stdout
 * @format: format string
 * Return: number of characters printed to stdout
*/
int _printf(const char *format, ...)
{
	int i, n;
	va_list args;
	int flag;
	void (*f)(va_list*, int*);

	i = 0;
	n = 0;
	flag = 0;
	if (format == NULL)
		return (n);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && !flag)
		{
			flag = !flag;
		} else if (!flag)
		{
			_putchar(format[i]);
			n++;
		} else
		{
			f = get_specifier(format[i]);
			if (f != NULL)
				f(&args, &n);
			flag = !flag;
		}
		i++;
	}
	return (n);
}
