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
		if (h->n)
			printf("%d\n", h->n);
		else
		{
			printf("Error\n");
			return (1);
		}
		h = h->next;
		i++;
	}
	printf("-> %lu elements\n", i);
	return (i);
}
