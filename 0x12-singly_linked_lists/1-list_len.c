#include "lists.h"
/**
 * list_len - number of elements in list
 * @h: pointer to header node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
