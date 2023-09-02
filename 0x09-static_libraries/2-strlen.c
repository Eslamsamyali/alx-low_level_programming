#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Description: This function takes a pointer to a string as an argument
 * and returns the length of the string.
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
