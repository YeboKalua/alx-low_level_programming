#include "lists.h"
/**
 * print_listint - prints elements of list
 * @h: header element
 * Return: number of elements printed
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
