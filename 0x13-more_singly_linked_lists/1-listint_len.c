#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *listint_len - return the numbers of elements
 *@h: data from list
 *
 *Return: return size_t
 */

size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
	h = h->next, size++;

	return (size);

}
