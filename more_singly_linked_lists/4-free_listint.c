#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees  a list
 * @head: pointer to the first node of the list
 * return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
