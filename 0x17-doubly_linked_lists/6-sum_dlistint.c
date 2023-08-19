#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of a list's items.
 * @head: List to calculate.
 * Return: The sum of the list's elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *aux = head;

	while (aux != NULL)
	{
		s = s + aux->n;
		aux = aux->next;
	}
	return (s);
}
