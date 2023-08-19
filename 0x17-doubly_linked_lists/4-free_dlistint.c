#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint list.
 * @head: List to free.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head, *tmp;

	if (aux != NULL)
	{
		tmp = aux;
		free_dlistint(aux->next);
		free(tmp);
	}
}
