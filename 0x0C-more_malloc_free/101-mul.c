#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Description: This program takes two command-line arguments,
 * converts them to integers, and then multiplies them.
 * The result is printed to the standard output.
 * If the number of arguments is incorrect or if either of the
 * arguments is not a positive integer, the program prints an error
 * message and exits with a status of 98.
 *
 * Return: 0 if successful, 98 otherwise
*/
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
