#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL) /* traverse the list */
	{
		tmp = head; /* store the current node */
		head = head->next; /* move to the next node */
		free(tmp->str); /* free the string of the current node */
		free(tmp); /* free the current node */
	}
}
