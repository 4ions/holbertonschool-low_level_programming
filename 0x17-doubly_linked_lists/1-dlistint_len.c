#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - return the numbers of nodes of linked list
 *@h: head of linked list
 *
 *Return: return size_t, that means the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
