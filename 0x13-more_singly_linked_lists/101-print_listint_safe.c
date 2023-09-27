#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current;
const listint_t *hold;

current = head;
if (current == NULL)
exit(98);

count = 0;
while (current != NULL)
{
hold = current;
current = current->next;
count++;
printf("[%p] %d\n", (void *)hold, hold->n);

if (hold < current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
}

return (count);
}
