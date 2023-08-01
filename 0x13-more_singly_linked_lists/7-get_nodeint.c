#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index nth from a linked list
 *
 * @head: pointer to the first node of the list
 * @index: nodes to access
 *
 * Return: head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
