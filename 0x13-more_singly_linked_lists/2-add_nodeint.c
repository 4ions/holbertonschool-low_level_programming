#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint - adds a new node at the beginnig of a singly linked list
 *@head: pointer to head of singy linked list
 *@n: number to add as new node in the list
 *
 *Return: return the adress of the new element listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
	return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
