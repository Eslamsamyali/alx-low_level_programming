#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* print the number of arguments minus one */
	printf("%d\n", argc - 1);
	/* return 0 to indicate success */
	return (0);
}
