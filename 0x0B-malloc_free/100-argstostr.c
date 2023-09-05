#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL) /* check if ac or av are empty */
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++) /* calculate the total length of the new string */
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* add one for the \n character */
	}
	len++; /* add one for the \0 character */

	str = malloc(sizeof(char) * len); /* allocate memory for the new string */
	if (str == NULL) /* check if malloc failed */
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++) /* copy each argument to the new string */
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* add a newline after each argument */
		k++;
	}
	str[k] = '\0'; /* add a null terminator at the end */

	return (str); /* return the pointer to the new string */
}
