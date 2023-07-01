#include "lists.h"
/**
 * free_list - Frees a list.
 * @head: First list element to free.
 * Description: It properlly frees all elements of a list.
 */
void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	if (aux->next != NULL)
	{
		aux = aux->next;
		free_list(aux);
	}
	free(head->str);
	free(head);
}
