#include "lists.h"
/**
 * print_listint - Print all elements of a list.
 * @h: list element to print.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int s = 0;
	const listint_t *aux = h;

	if (aux != NULL)
	{
		printf("%i\n", aux->n);
		s++;
		s = s + print_listint(aux->next);
	}
	return (s);
}
