#include "lists.h"
/**
 *get_nodeint_at_index - return the node of a listint
 *@head: head pointer
 *@index: index to find
 *
 *Return: node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == 0)
		return (0);
	while (count < index)
	{
		if (head == 0)
			return (0);
		head = head->next;
		count++;
	}
	return (head);
}
