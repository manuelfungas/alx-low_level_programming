#include "lists.h"

/**
 * add_nodeint - adds a node at the beginnig of the linked list
 *
 * @head: pointer to the first node of the list
 *
 * @n: int to add
 *
 * Return: NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}

	new_node->n = n;
	*head = new_node;

	return (*head);
}
