#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	/* loop through the array of arguments */
	for (i = 0; i < argc; i++)
	{
		/* print each argument followed by a new line */
		printf("%s\n", argv[i]);
	}
	/* return 0 to indicate success */
	return (0);
}
