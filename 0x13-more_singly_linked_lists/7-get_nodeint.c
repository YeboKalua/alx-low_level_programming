#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index;
 * @head: head node
 * @index: nth node to be returned
 * Return: index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
