#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a list.
 * @head: Address of the head of the list.
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *tmp;

	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
		return (NULL);
	aux->next = NULL;
	aux->prev = NULL;
	aux->n = n;
	if (*head == NULL)
	{
		*head = aux;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = aux;
	aux->prev = tmp;
	return (aux);
}
