#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at a index
 *@h: head of dobly linked list
 *@idx: position of the new node
 *@n: numeric value
 *
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index_d = 0;
	dlistint_t *new_node, *check, *p, *ne;

	if (!h)
		return (NULL);
	check = *h;
	ne = *h;
	while (check)
	{
		check = check->next;
		index_d++;
	}
	if (idx > index_d)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	index_d = 0;
	for (index_d = 0; index_d < idx; index_d++)
	{
		p = ne;
		ne = ne->next;
	}
	new_node->next = ne;
	new_node->prev = p;
	p->next = new_node;
	return (new_node);

}
