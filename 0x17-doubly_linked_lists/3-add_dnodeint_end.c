#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_dnodeint_end - add node at the tail of dobly linked list
 *@head: head of dobly linked list
 *@n: number was be in the node
 *
 *Return: return the new node on tail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	tmp = *head;

	if (!head)
	{
		return (NULL);
	}

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head == NULL)/**When the list is empty*/
	{
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;

	return (new_node);
}
