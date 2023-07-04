#include "lists.h"
/**
 * listint_len - Count nodes in a list.
 * @h: List to count.
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int s = 0;
	const listint_t *aux = h;

	if (aux != NULL)
	{
		s++;
		s = s + listint_len(aux->next);
	}
	return (s);
}
