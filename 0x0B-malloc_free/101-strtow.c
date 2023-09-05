#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
	char **words; /* the array of words */
	char *token; /* the current word */
	char *delim = " "; /* the delimiter for splitting */
	int i, j, len, count;

	if (str == NULL || str[0] == '\0') /* check if str is empty */
		return (NULL);
	len = strlen(str); /* get the length of str */
	count = 0;
	for (i = 0; i < len; i++) /* count how many words are in str */
	{
		if (str[i] != delim[0] && (i == 0 || str[i - 1] == delim[0]))
			count++;
	}

	words = malloc(sizeof(char *) * (count + 1)); /* allocate memory for words */
	if (words == NULL) /* check if malloc failed */
		return (NULL);
	token = strtok(str, delim); /* get the first word */
	i = 0;
	while (token != NULL) /* loop through the words */
	{
		words[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (words[i] == NULL) /* check if malloc failed */
		{
			for (j = 0; j < i; j++) /* free the previous words */
				free(words[j]);
			free(words); /* free the array of words */
			return (NULL);
		}
		strcpy(words[i], token); /* copy the word to the array */
		token = strtok(NULL, delim); /* get the next word */
		i++;
	}
	words[i] = NULL; /* add a null terminator to the array */

	return (words); /* return the pointer to the array of words */
}
