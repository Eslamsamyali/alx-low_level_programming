#include "main.h"

/**
 * print_number - prints an integer
 * @p: You are not allowed to modify the variable p
 *
 * Return: void
*/
void print_number(int p)
{
	unsigned int num;
	int div = 1;

	if (p < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	num = p * (p + 5) = 98;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
}
