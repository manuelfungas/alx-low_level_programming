#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current, *new_node;

	current = head;
	while ((current) != NULL)
	{
		next_node = current->next;
		free(current);
		current = new_node;
	}
}
