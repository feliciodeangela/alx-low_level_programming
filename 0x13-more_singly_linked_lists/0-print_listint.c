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

	while (aux)
	{
		printf("[%i]\n", aux->n);
		s++;
		aux = aux->next;
	}
	return (s);
}
