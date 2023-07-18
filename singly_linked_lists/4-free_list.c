#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: heade of the linked list
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	whie ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
