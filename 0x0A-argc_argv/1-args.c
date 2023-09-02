#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/* declare a variable to store the number of user arguments */
	int user_args;
	/* subtract one from argc to get the number of user arguments */
	user_args = argc - 1;
	/* print the number of user arguments followed by a new line */
	printf("%d\n", user_args);
	/* return 0 to indicate success */
	return (0);
}
