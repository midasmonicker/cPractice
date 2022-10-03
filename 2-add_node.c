#include "lists.h"

/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int count;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);

	for (count = 0; str[count]; count++)
		;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
