#include "lists.h"
/**
 * add_nodeint - Add a node to the begining of a list.
 * @head: Represents the new head.
 * @n: Data for the new node.
 * Return: Address of new node (head) || NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (aux);
}
