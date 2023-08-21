#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a string as an argument
 * and prints the string, followed by a new line, to stdout.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
