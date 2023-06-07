#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of list
 * @head: first node in list
 * @n: integer to be added
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *toAdd;
	listint_t *temp = *head;

	toAdd = malloc(sizeof(listint_t));

	if (toAdd == NULL)
		return (NULL);
	toAdd->n = n;
	toAdd->next = NULL;

	if (*head == NULL)
	{
		*head = toAdd;
		return (toAdd);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = toAdd;
	return (toAdd);
}
