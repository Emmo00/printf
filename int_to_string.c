#include"main.h"
void print_number(int number, int *n)
{
	if (number == 0)
	{
		return;
	}
	*n = *n + 1;
	print_number(number / 10, n);
	_putchar((number % 10) + '0');
}