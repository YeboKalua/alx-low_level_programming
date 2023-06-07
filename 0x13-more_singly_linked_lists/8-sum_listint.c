#include "lists.h"
/**
 * sum_listint - sums all data from nodes
 * @head: first node
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
