#include "lists.h"
/**
 * print_list - Print all the elements of a list.
 * @h: List to print.
 * Return: Number of printed objects.
 */
size_t print_list(const list_t *h)
{
	unsigned long int s = 0;
	const struct list_s *aux = h;

	if (aux != NULL)
	{
		if (aux->str != NULL)
		{
			printf("[%u] %s\n", aux->len, aux->str);
			s++;
		}
		else
		{
			printf("[0] (nil)\n");
			s++;
		}
		s = s + print_list(aux->next);
	}
	return (s);
}
