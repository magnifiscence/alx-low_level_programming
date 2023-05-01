#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to the list listint_t which is to be freed.
 */
void free_listint(listint_t *head)
{
	/*lets declare a temporal pointer to a list*/
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
