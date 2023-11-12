#include "lists.h"

/**
 * sum_listint - sum up all the data of a linked list
 * @head; pointer to the list
 * return: sum (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
