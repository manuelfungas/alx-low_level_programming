#include "lists.h"

/**
 * add_nodeint_end - add at the end of the node
 *
 * @head: pointer to the first node of the list
 *
 * @n:int to add
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	last = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (*head);
}
