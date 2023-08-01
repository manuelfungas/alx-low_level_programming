#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	current = *head;
	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
