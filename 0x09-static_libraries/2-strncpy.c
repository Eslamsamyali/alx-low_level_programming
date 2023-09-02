#include "main.h"

/**
 * _strncpy - function is similar to the _strncpy function,
 * except that it will use at most n bytes from src; and
 *
 * @dest: pointer to destination @input
 * @src: pointer to source @input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
