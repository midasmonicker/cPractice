#include "lists.h"

/**
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!(h->str))
			printf("[%d] %s\n",  0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
