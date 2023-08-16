#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different
 * combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
        int dight1 = 0, dight2;

        while (dight1 <= 9)
        {
                dight2 = dight1 + 1;
                while (dight2 <= 9)
                {
                        if (dight1 != dight2 && dight1 < dight2)
                        {
                                putchar(dight1 + 48);
                                putchar(dight2 + 48);
                                if (dight1 + dight2 != 17)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        dight2++;
                }
                dight1++;
        }
        putchar('\n');
        return (0);
}
