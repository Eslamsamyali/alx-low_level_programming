#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to the concatenated string
 * if the function fails, it should return NULL
 * if n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s; /* pointer to the concatenated string */
	unsigned int i, j, len1, len2; /* loop and length variables */

	/* if s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* if s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* get the length of s1 and s2 using strlen */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* if n is greater or equal to the length of s2, use the entire string s2 */
	if (n >= len2)
	n = len2;

	/* allocate memory for the concatenated string using malloc */
	s = malloc(sizeof(char) * (len1 + n + 1));
	/* check if malloc failed */
	if (s == NULL)
	return (NULL);
	/* copy s1 into s using a for loop */
	for (i = 0; i < len1; i++)
	s[i] = s1[i];
	/* copy n bytes of s2 into s using another for loop */
	/* start from the end of s1 and end with a null byte */
	for (j = 0; j < n; j++)
	s[i + j] = s2[j];
	s[i + j] = '\0';
	/* return the pointer to the concatenated string */
	return (s);
}
