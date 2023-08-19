#include "lists.h"
/**
 * get_dnodeint_at_index - Get the node at a determined index.
 * @head: List to search in.
 * @index: Index of the located node.
 * Return: Pointer to evaluated node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	while (aux != NULL)
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
	return (NULL);
}
