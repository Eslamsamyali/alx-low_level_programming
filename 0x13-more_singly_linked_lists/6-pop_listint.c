#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the pointer of the first node of the list
 * Return: the head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL) /* check if head is NULL */
		return (0);

	temp = *head; /* assign temp to the first node */
	n = temp->n; /* get the data of the first node */
	*head = (*head)->next; /* move the head to the next node */
	free(temp); /* free the first node */

	return (n); /* return the data of the first node */
}
