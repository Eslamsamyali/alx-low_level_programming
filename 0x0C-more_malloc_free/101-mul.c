#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if s is a digit, 0 otherwise
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed to program
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1 = 0, len2 = 0, lenres;
	int *res;
	char *s1, *s2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	s1 = argv[1], s2 = argv[2];
	if (!_isdigit(s1) || !_isdigit(s2))
	{
		printf("Error\n");
		return (98);
	}
	while (s1[len1 + 1])
		len1++;
	while (s2[len2 + 1])
		len2++;
	lenres = len1 + len2;
	res = calloc(lenres + 1, sizeof(int));
	if (!res)
		return (98);
	for (i = len1; i >= 0; i--)
		for (j = len2; j >= 0; j--)
			res[i + j] += (s1[i] - '0') * (s2[j] - '0');
	for (i = lenres; i > 0; i--)
		if (res[i] > 9)
			res[i - 1] += res[i] / 10, res[i] %= 10;
	for (i = !res[0]; i <= lenres; i++)
		printf("%d", res[i]);
	printf("\n");
	free(res);
	return (0);
}
