#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
*/
void print_number(int n)
{
	int i, j, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	div = 1;
	i = n;
	while (i > 9)
	{
		i /= 10;
		div *= 10;
	}
	while (div >= 1)
	{
		j = n / div;
		_putchar(j + '0');
		n -= j * div;
		div /= 10;
	}
}
