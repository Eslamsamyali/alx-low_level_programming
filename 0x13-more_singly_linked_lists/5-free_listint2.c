#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer of the first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL) /* check if head is NULL */
		return;

	current = *head; /* assign current to the first node */

	while (current != NULL) /* loop through the list */
	{
		temp = current; /* assign temp to the current node */
		current = current->next; /* move current to the next node */
		free(temp); /* free the temp node */
	}

	*head = NULL; /* set the head to NULL */
}
