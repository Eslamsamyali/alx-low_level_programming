#include <stdlib.h>
#include <time.h>
#include <sdtio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6. 
 *
 * Return: 0 (success)*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dight = n % 10;

	if (dight > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, dight);
	else if (dight == 0)
		printf("Last digit of %i is %i and is 0\n", n, dight);
	else if (dight < 6 && dight != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, dight);
	return (0);
}
