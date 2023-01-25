#include"main.h"
/**
 * print_number - prints all digits of an integer to stdout
 * @number: number to be printed
 * @n: number of character printed tracker
 * Return: nothing
 */
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
