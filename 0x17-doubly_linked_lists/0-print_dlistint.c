#include "lists.h"
/**
 * print_listint - print all elements of the list.
 * @h: List to print.
 * Return: Number of nodes printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nn = 0;
	const dlistint_t *aux = h;

	while (aux != NULL)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		nn++;
	}
	return nn;
}
