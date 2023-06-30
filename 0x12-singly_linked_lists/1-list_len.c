#include "lists.h"
/**
 * list_len - Count number of elements in a linked list.
 * @h: List to traverse.
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned long int s = 0;
	const  struct list_s *aux = h;

	if (aux != NULL)
	{
		s++;
		s = s + list_len(aux->next);
	}
	return (s);
}
