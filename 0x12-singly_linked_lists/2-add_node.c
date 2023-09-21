#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head; /* link the new node to the head */
	*head = new; /* make the new node the head */
	return (new); /* return the address of the new node */
}
