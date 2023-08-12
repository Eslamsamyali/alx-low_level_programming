#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all singls dight numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dight = 0;

	while (dight <= 9)
	{
		printf("%i", dight);
		dight++;
	}
	printf("\n");
	return (0);
}
