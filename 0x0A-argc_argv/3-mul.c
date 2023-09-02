#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;
	/* check if the number of arguments is correct */
	if (argc != 3)
	{
		/* print error message and return 1 */
		printf("Error\n");
		return (1);
	}
	/* convert the arguments to integers using atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	/* calculate the product using the multiplication operator */
	product = num1 * num2;
	/* print the product followed by a new line */
	printf("%d\n", product);
	/* return 0 to indicate success */
	return (0);
}
