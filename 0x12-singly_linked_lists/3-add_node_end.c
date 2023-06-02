#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of list
 * @head: head node pointer
 * @str: string to be added
 * Return: string added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);
	added->str = strdup(str);
	added->len = len;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = added;
	return (added);
}
