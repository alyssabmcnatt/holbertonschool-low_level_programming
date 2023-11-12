#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index
 * @head: pointer to first element of list
 * @index: node wanted to get positiom
 * return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
