#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dight = 48 /*48; decimal rep of 0*/

	;while (dight <= 102) /*102; decimal rep of f*/
	{
		putchar(dight);

		/* after 9 we jump till 96; '*/
		if (dight == 57)
			dight += 39;
		dight++;
	}
	putchar('\n');
	return (0);
}
