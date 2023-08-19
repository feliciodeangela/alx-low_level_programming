#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node in a given position.
 * @idx: Index where new node should be inserted.
 * @n: Data inside the node.
 * @h: List to insert node at.
 * Return: Address of new node | NULL if not possible to insert.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *auxBefore, *tmp = *h;
	unsigned int i = 0;

	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
		return (NULL);
	aux->prev = NULL;
	aux->n = n;
	aux->next = NULL;
	auxBefore = NULL;
	if (*head == NULL)
		return (aux);
	while (tmp != NULL)
	{
		if (i == idx)
		{
			aux->next = tmp;
			aux->prev = auxBefore;
			tmp->prev = aux;
			auxBefore->next = aux;
			return (aux);
		}
		auxBefore = tmp;
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
