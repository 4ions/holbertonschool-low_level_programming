#include "lists.h"
/**
 *sum_listint - return the sum of all data
 *@head: head of pointer
 *
 *Return: Return sum of all the data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == 0)
		return (0);
	while (head != 0)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
