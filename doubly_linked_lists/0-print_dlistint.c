#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (NULL);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
