#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int sum_listint(listint_t *head);
	while (h != NULL) /* traverse the list */
	{
		printf("%d\n", h->n); /* print the data */
		h = h->next; /* move to the next node */
		count++; /* increment the counter */
	}
	return (count); /* return the number of nodes */
}
