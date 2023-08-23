#include "main.h"

/**
 * _strcat - function that concattenates
 * two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting sting @dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
		;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j] != '\0');
	return (dest);
}
