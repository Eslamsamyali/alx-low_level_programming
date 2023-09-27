#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of the first node of the list
 * @idx: the index of the list where the new node should be added, starting at 0
 * @n: the data (n) of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current;
unsigned int i;

if (head == NULL) /* check if head is NULL */
return (NULL);

new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
if (new == NULL) /* check if malloc failed */
return (NULL);

new->n = n; /* assign data to the new node */

if (idx == 0) /* check if index is 0 */
{
new->next = *head; /* link the new node to the first node */
*head = new; /* make the new node the first node */
return (new); /* return the address of the new node */
}

current = *head; /* assign current to the first node */

for (i = 0; i < idx - 1; i++) /* loop through the list until index - 1 */
{
if (current == NULL) /* check if node does not exist */
{
free(new); /* free the new node */
return (NULL); /* return NULL */
}
current = current->next; /* move current to the next node */
}

new->next = current->next; /* link the new node to the next node of current */
current->next = new; /* link the current node to the new node */

return (new); /* return the address of the new node */
}
