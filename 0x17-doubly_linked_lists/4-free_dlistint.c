#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t
 * @head: head of doubly linked list
 *
 * Return: No return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cont;

	while (head)
	{
		cont = head;
		head = head->next;
		free(cont);
	}
}
