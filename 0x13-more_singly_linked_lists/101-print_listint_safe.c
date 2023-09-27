#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast, *loop;
int fun (int x, char *p);

if (head == NULL) /* check if head is NULL */
exit(98);

slow = head; /* assign slow to head */
fast = head; /* assign fast to head */

while (slow && fast && fast->next) /* loop through the list */
{
slow = slow->next; /* move slow to the next node */
fast = fast->next->next; /* move fast to the next next node */
if (slow == fast) /* check if slow and fast meet */
{
loop = find_loop(head, slow); /* find the start of the loop */
break; /* break the loop */
}
}

if (loop) /* check if loop exists */
{
count = print_loop(head, loop); /* print the nodes in the loop */
}
else /* no loop */
{
count = print_normal(head); /* print the nodes normally */
}

return (count); /* return the number of nodes */
}

/**
 * find_loop - finds the start of a loop in a linked list
 * @head: pointer to the first node of the list
 * @meet: pointer to the meeting point of slow and fast pointers
 * Return: pointer to the start of the loop or NULL if no loop
 */
const listint_t *find_loop(const listint_t *head, const listint_t *meet)
{
const listint_t *start, *end;

start = head; /* assign start to head */
end = meet; /* assign end to meet */

while (start != end) /* loop until start and end meet */
{
start = start->next; /* move start to the next node */
end = end->next; /* move end to the next node */
}

return (start); /* return the pointer to the start of the loop */
}

/**
 * print_loop - prints the nodes in a looped linked list
 * @head: pointer to the first node of the list
 * @loop: pointer to the start of the loop
 * Return: the number of nodes in the list
 */
size_t print_loop(const listint_t *head, const listint_t *loop)
{
size_t count = 0;
const listint_t *current;

current = head; /* assign current to head */

while (current != loop) /* loop until current reaches loop */
{
printf("[%p] %d\n", (void *)current, current->n); /* print current node */
count++; /* increment count */
current = current->next; /* move current to the next node */
}

printf("[%p] %d\n", (void *)current, current->n); /* print loop node */
count++; /* increment count */
current = current->next; /* move current to the next node */

while (current != loop) /* loop until current reaches loop again */
{
printf("[%p] %d\n", (void *)current, current->n); /* print current node */
count++; /* increment count */
current = current->next; /* move current to the next node */
}

printf("-> [%p] %d\n", (void *)current, current->n); /* print arrow and loop node */

return (count); /* return the number of nodes */
}

/**
 * print_normal - prints a normal linked list
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_normal(const listint_t *head)
{
size_t count = 0;
    
while (head != NULL) /* loop through the list */
{
printf("[%p] %d\n", (void *)head, head->n); /* print current node */
count++; /* increment count */
head = head->next; /* move head to the next node */ 
}

return (count); /* return the number of nodes */ 
}
