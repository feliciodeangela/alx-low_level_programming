#include "lists.h"
/**
 * dlistint_len - Count the number of elements on a list.
 * @h: The list to count.
 * Return: Number oof elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nn = 0;
	const dlistint_t *aux = h;

	while (aux != NULL)
	{
		aux = aux->next;
		nn++;
	}
	return (nn);
}
