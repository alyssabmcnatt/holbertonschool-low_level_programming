#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the original linked list
 * @str: the string to add to the node
 * Return: the address of the new list or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	tempt = malloc(sizeof(list_t));
	if (tempt == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	tempt->next = *head;
	*head; temp;
	return (temp);
}
