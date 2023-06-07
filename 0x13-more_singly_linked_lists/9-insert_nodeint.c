#include "lists.h"
/**
 * insert_nodeint_at_index - creates at node at given index
 * @head: head node
 * @idx: index under consideration
 * @n: data in new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *toAdd;

	toAdd = malloc(sizeof(listint_t));

	if (toAdd == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		toAdd->next = *head;
		*head = toAdd;
		return (toAdd);
	}
	while (current != NULL)
	{
		if (n == idx)
		{
			toAdd->next = current->next;
			current->next = toAdd;
			return (toAdd);
		}
		else
			toAdd = toAdd->next;
	}
	return (NULL);
}

