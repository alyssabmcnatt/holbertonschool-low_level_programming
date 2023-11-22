#include "lists.h"

/**
 * sum_dlistint - returns some of all data
 * @head: head
 * Return: sum of data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	sum = 0 ;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
