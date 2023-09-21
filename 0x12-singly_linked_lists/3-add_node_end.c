#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int len = 0;

	new = malloc(sizeof(list_t)); /* allocate memory for the new node */
	if (new == NULL) /* check if allocation failed */
		return (NULL);
	new->str = strdup(str); /* duplicate the string */
	if (new->str == NULL) /* check if duplication failed */
	{
		free(new); /* free the new node */
		return (NULL);
	}
	while (str[len] != '\0') /* get the length of the string */
		len++;
	new->len = len; /* assign the length to the new node */
	new->next = NULL; /* make the new node the last node */
	if (*head == NULL) /* check if the list is empty */
		*head = new; /* make the new node the head */
	else
	{
		last = *head; /* start from the head */
		while (last->next != NULL) /* traverse the list until the last node */
			last = last->next;
		last->next = new; /* link the last node to the new node */
	}
	return (new); /* return the address of the new node */
}
