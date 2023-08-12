#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 * while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dight = 0;

	while (dight <= 9)
	{
		/*convert dight to ASCII representation*/
		putchar(dight + '0');
		dight++;
	}
	putchar('\n');
	return (0);
}
