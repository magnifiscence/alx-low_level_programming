#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function frees a link list
 * @head: list_t is the lst to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
