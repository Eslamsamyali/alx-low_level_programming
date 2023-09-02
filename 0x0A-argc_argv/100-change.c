#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	/* check if the number of arguments is correct */
	if (argc != 2)
	{
		/* print error message and return 1 */
		printf("Error\n");
		return (1);
	}
	/* convert the argument to an integer using atoi */
	cents = atoi(argv[1]);
	/* if the number is negative, print 0 and return 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* use a greedy algorithm to find the minimum number of coins */
	/* start with the largest coin value and subtract it from the cents */
	/* increment the coins counter and repeat until cents is zero */
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	/* print the number of coins followed by a new line */
	printf("%d\n", coins);
	/* return 0 to indicate success */
	return (0);
}
