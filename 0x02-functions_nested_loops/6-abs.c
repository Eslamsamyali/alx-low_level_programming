#include "main.h"

/**
 * _abs - function that computers the absolute value of an integer
 *
 * @n: takes in unteger type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
