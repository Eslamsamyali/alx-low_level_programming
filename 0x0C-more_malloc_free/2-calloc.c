#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p; /* pointer to the allocated memory */
	unsigned int i, total; /* loop and total size variables */

	/* if nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* calculate the total size of memory needed */
	total = nmemb * size;

	/* allocate memory using malloc */
	p = malloc(total);

	/* check if malloc failed */
	if (p == NULL)
		return (NULL);

	/* set the memory to zero using memset */
	memset(p, 0, total);

	/* return the pointer to the allocated memory */
	return (p);
}
