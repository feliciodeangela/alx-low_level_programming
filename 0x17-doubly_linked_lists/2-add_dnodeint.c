#include "lists.h"
/**
 * add_dnodeint - Add new node to beginning of list.
 * @head: Node that represents beginning of list.
 * @n: Data to add to new node.
 * Return: Address of new head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;

	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
		return (NULL);
	aux->prev = NULL;
	aux->n = n;
	aux->next = NULL;
	aux->next = *head;
	if (*head != NULL)
		(*head)->prev = aux;
	*head = aux;
	return (aux);
}
