#include "lists.h"

/**
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int count;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	newnode->len = count;
	newnode->next = NULL;
	temp = *head;

	if (!temp)
		*head = newnode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}
