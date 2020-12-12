#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - Sum of all the data (n) of a linked list
 *@head: head of the dobly linked list
 *
 *Return: the sum of all n
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	if (!head)
		return (0);
	while (head)
	{
		if (!head)
			return (sum);

		sum += head->n;
		head = head->next;
	}
	return (sum);
}
