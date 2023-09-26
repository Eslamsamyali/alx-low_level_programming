#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: the index of the node, starting at 0
 * Return: pointer to the nth node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	for (i = 0; i < index; i++) /* loop through the list until index */
	{
		head = head->next; /* move head to the next node */
		if (head == NULL) /* check if node does not exist */
			return (NULL);
	}

	return (head); /* return the pointer to the nth node */
}
