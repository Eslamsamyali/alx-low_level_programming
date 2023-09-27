#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer of the first node of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;

if (head == NULL || *head == NULL) /* check if head is NULL */
return (NULL);

prev = NULL; /* initialize prev to NULL */

while (*head != NULL) /* loop through the list */
{
next = (*head)->next; /* assign next to the next node of head */
(*head)->next = prev; /* link the head node to the prev node */
prev = *head; /* move prev to the head node */
*head = next; /* move head to the next node */
}

*head = prev; /* make the prev node the first node */

return (*head); /* return the pointer to the first node */
}
