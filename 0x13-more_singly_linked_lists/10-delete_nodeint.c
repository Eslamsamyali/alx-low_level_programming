#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to the pointer of the first node of the list
 * @index: the index of the node that should be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *current;
unsigned int i;

if (head == NULL || *head == NULL) /* check if head is NULL */
return (-1);

if (index == 0) /* check if index is 0 */
{
temp = *head; /* assign temp to the first node */
*head = (*head)->next; /* move the head to the next node */
free(temp); /* free the first node */
return (1); /* return 1 */
}

current = *head; /* assign current to the first node */

for (i = 0; i < index - 1; i++) /* loop through the list until index - 1 */
{
if (current == NULL) /* check if node does not exist */
return (-1); /* return -1 */
current = current->next; /* move current to the next node */
}

temp = current->next; /* assign temp to the next node of current */
current->next = temp->next; /* link the current node to the next node of temp */
free(temp); /* free the temp node */

return (1); /* return 1 */
}
