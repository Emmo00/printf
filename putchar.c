#include"printf.h"
/**
 * _putchar - prints character to stdout
 * @c: character
 * Return: nothing
*/

void _putchar(char c)
{
	write(1, &c, 1);
}