#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	/* loop through the array of arguments */
	for (i = 1; i < argc; i++)
	{
		/* loop through each character of the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* check if the character is not a digit */
			if (!isdigit(argv[i][j]))
			{
				/* print error message and return 1 */
				printf("Error\n");
				return (1);
			}
		}
		/* convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}
	/* print the sum followed by a new line */
	printf("%d\n", sum);
	/* return 0 to indicate success */
	return (0);
}
