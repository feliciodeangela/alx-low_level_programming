#include "lists.h"
/**
 * free_list - Frees a list.
 * @head: First list element to free.
 * Description: It properlly frees all elements of a list.
 */
void free_list(list_t *head)
{
	list_t *aux = head, *newHead;

	while (aux != NULL)
	{
		newHead = aux;
		aux = aux->next;
		free(newHead->str);
		free(newHead);
	}
}
