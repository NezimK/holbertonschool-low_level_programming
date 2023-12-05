#include "lists.h"

/**
 * list_len - show the number of elements in a lists
 * @h: a linked list
 * Return: the number of list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
