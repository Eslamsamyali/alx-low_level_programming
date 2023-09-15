#include <stdio.h>
#include "function_pointers.h"

/**
 * print`:_upper - Prints a name in uppercase.
 * @name: The name to be printed.
 */
void print_upper(char *name)
{
	int i = 0;

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i] - 32);
		else
			putchar(name[i]);
		i++;
	}
	printf("\n");
}

/**
 * print_lower - Prints a name in lowercase.
 * @name: The name to be printed.
 */
void print_lower(char *name)
{
	int i = 0;

	while (name[i])
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
			putchar(name[i] + 32);
		else
			putchar(name[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *name = "John";

	printf("Original name: %s\n", name);

	printf("Uppercase name: ");
	print_name(name, print_upper);

	printf("Lowercase name: ");
	print_name(name, print_lower);

	return (0);
}
