#include "lists.h"
/**
 * add_node - Add a new node to begining of list.
 * @head: Represents the new head.
 * @str: Data in the new node.
 * Return: Address to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux = malloc(sizeof(list_t));

	aux->str = strdup(str);
	aux->len = strlen(str);
	aux->next = *head;
	*head = aux;
	return (aux);
}
