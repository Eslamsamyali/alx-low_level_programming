#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int dight = 0;

	while (dight <= 9)
	{
		putchar(dight + 48);

		if (dight != 9)
		{
			putchar(',');
			putchar(' ');
		}

		dight++;
	}
	putchar('\n');

	return (0);
}
