#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints list
 * @h: header node
 * Return: number of characters printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
		n++;
	}
	return (n);
}
