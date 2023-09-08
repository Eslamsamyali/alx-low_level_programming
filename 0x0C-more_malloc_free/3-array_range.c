#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a; /* pointer to the allocated memory */
	int i, len; /* loop and length variables */

	/* if min > max, return NULL */
	if (min > max)
		return (NULL);

	/* calculate the length of the array */
	len = max - min + 1;

	/* allocate memory for the array using malloc */
	a = malloc(sizeof(int) * len);

	/* check if malloc failed */
	if (a == NULL)
		return (NULL);

	/* fill the array with values from min to max using a for loop */
	for (i = 0; i < len; i++)
		a[i] = min + i;

	/* return the pointer to the allocated memory */
	return (a);
}
