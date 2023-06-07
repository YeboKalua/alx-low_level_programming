#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 * Return: value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL || head == NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);

	
}
