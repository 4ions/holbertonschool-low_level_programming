#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint - free listint_t
 *@head: pointer to head of singy linked list
 *
 *Return: return the adress of the new element listint_t
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
