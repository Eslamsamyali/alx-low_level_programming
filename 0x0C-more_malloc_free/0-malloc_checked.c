#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory
 * if malloc fails, the function should cause normal
 * process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b); /* allocate memory using malloc */

	if (p == NULL) /* check if malloc failed */
	{
		exit(98); /* terminate the process with status 98 */
	}
	return (p); /* return the pointer to the allocated memory */
}
