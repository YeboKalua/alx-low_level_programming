#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node 
 * @head: pointer to head node
 * @str: string to add at beginning
 * Return: new string added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	unsigned int len = 0;

	while (str[len])
		len++;
	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);
	added->str = strdup(str);
	added->len = len;
	added->next = (*head);
	(*head) = added;

	return (*head);
}	
