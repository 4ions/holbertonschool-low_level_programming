#include "lists.h"

/**
 *
 *
 *
 *
 *
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
