#include "lists.h"
/**
 * add_node_end - Add a new node to the end of list.
 * @head: Represents the new tail.
 * @str: Data in the new node.
 * Return: Address to new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *newHead;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
	{
		return (NULL);
	}
	aux->str = strdup(str);
	aux->len = strlen(str);
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (*head);
	}
	newHead = *head;
	while (newHead->next != NULL)
	{
		newHead = newHead->next;
	}
	newHead->next = aux;
	return (aux);
}
