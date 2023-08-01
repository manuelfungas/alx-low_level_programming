#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head of node
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *current, *next_node;

	if (*head == NULL)
		return (0);

	current = *head;
	next_node = current->next;
	first_node = current->n;
	free(current);
	*head = next_node;
	return (first_node);
}
