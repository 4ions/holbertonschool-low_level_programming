#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of doubly linked list
 * @index: index
 *
 * Return: return int if was succeeded or failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int index_d = 0;
	dlistint_t *check = *head, *ne = *head, *p, *tmp;

	if (!head || !(*head))
		return (-1);
	while (check)
	{
		check = check->next;
		index_d++;
	}

	if (index > (index_d - 1))
		return (-1);

	if (index == 0)
	{
		ne = ne->next;
		free(*head);
		*head = ne;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (index_d = 0; index_d < index; index_d++)
		p = ne, ne = ne->next;

	p->next = ne->next;
	tmp = ne->next;
	if (tmp)
		tmp->prev = p;
	free(ne);
	return (1);
}
