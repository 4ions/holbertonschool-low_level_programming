#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_listint - prints all elements of listint_t list
 *@h: data from list
 *
 *Return: return size_t
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
