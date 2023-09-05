#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, l, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	tab = malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	tab[count] = NULL;
	for (i = 0, l = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				;
			tab[l] = malloc(j - i + 1);
			if (tab[l] == NULL)
			{
				for (k = 0; k < l; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (k = 0; k < j - i; k++)
				tab[l][k] = str[i + k];
			tab[l][k] = '\0';
			l++;
		}
	return (tab);
}
