#include "main.h"

/**
 * _strncat - function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 *
 * @dest: pointer to destination @input
 * @src: pointer to source @input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
