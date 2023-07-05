#include "lists.h"
/**
 * add_nodeint_end - Add a new node to end of list.
 * @head: New node to add to list.
 * @n: Data to add to new node.
 * Return: Address of new node.
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *aux, *newNode;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (*head);
	}
	newNode = *head;
	while (newNode->next != NULL)
		newNode = newNode->next;
	newNode->next = aux;
	return (aux);
}
