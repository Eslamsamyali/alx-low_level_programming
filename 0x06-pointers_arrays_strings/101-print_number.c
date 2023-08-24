#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
*/
void print_number(int n)
{
	unsigned int num;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
}
