#include "lists.h"
/**
 * free_listint - Frees a list.
 * @head: First list element to free.
 * Description: It properlly frees all elements of a list.
 */
void free_listint(listint_t *head)
{
	listint_t *aux = head, *newNode;

	while (aux != NULL)
	{
		newNode = aux;
		aux = aux->next;
		free(newNode);
	}
}
