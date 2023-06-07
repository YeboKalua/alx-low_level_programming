#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head node
 * @index: where to delete
 * Return: 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
