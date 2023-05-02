#include "lists.h"
/**
 * reverse_listint - function that reverses a singly linked list.
 * @head: pointer to the first node.
 * Return: pointer to first node of the list that is already reversed.
 */
listint_t *reverse_listint(listint_t **head)
{
	/*lets declare and assign values*/
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
