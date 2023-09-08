#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: size of the new memory block
 * Return: pointer to the new memory block
 * if new_size > old_size, the “added” memory should be set to 0
 * if new_size == old_size do not do anything and return ptr
 * if ptr is NULL, then the call is equivalent to malloc(new_size)
 * if new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr) and return NULL
 * if malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p; /* pointer to the new memory block */
	unsigned int min; /* minimum size between old and new */

	/* if new_size == old_size do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* if ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* allocate memory for the new block using malloc */
	p = malloc(new_size);

	/* check if malloc failed */
	if (p == NULL)
		return (NULL);

	/* get the minimum size between old and new */
	min = (old_size < new_size) ? old_size : new_size;

	/* copy the content of the old block to the new block using memcpy */
	memcpy(p, ptr, min);

	/* if new_size > old_size, set the “added” memory to 0 using memset */
	if (new_size > old_size)
		memset(p + min, 0, new_size - min);

	/* free the old block using free */
	free(ptr);

	/* return the pointer to the new block */
	return (p);
}
