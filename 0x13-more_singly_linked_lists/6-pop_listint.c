#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node
 *@head: pointer to head
 *
 *Return: Return head node's data
 */
int pop_listint(listsint_t **head)
{
	listsint_t *tmp = *head;
	listsint_t *tmp2;
	int n;

	if (head == 0 || tmp == 0)
		return (0);
	tmp2 = tmp->next;
	n = tmp->n;
	free(tmp);
	*head = tmp2;

	return (n);
}
