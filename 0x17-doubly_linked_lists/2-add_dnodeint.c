#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - add a new node at the beginning of a list
 *@head: head of de dobly linked list
 *@n: number was be stored int the new node
 *
 *Return: adress to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (0);
	}

	new_node->n = n;
	
	new_node->next = *head;
	*head = new_node;
	new_node->prev = *head;
	return (new_node);

}
