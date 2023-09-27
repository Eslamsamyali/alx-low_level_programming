#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: the sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL) /* check if head is NULL */
return (0);

while (head != NULL) /* loop through the list */
{
sum += head->n; /* add the data of the current node to the sum */
head = head->next; /* move head to the next node */
}

return (sum); /* return the sum */
}
