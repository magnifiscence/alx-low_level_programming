#include "lists.h"
/**
 * free_listint2 - function frees a linked list listint_t.
 * @head: pointer to first node.
 */
void free_listint2(listint_t **head)
{
	/*lets declare a temporal pointer to  the list*/
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
