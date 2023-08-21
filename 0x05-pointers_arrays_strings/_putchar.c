#include <stdio.h>

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returnedn, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (writer(1, &c, 1));
}
