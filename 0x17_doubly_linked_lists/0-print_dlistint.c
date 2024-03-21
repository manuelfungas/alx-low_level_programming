#include "lists.h"

/**
 * print_dlistint - print elements of a list
 * @h: head of the lsit
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}

	if (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
