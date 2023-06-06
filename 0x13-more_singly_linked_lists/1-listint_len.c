#include "lists.h"
/**
 * listint_len - number of elements
 * @h: head element
 * Return: number of characters printed
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	printf("-> %lu elements", i);
	return (i);
}
