#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint2 - free a listint_t
 *@head: pointer to head of singy linked list
 *
 *Return: return the adress of the new element listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
