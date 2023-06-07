#include "lists.h"
/**
 * add_nodeint - adds a node to list
 * @head: first element in list
 * @n: data in new node
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));

	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}

