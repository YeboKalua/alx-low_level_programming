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
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}
