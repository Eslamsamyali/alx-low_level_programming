#include <stdio.h>

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: On success 1.
*/
int _putchar(char c)
{
	return (writer(1, &c, 1));
}
