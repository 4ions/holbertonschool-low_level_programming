#include "lists.h"

/**
 *get_dnodeint_at_index - get the nth of a node
 *@head: head of a dobly linked list
 *@index: index of a dobly linked list
 *
 *Return: the head of a nth by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int _index = 0;

	if (!head)
		return (NULL);

	while (_index < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		_index++;
	}
	return (head);
}
