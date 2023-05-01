#include "lists.h"
/**
 * pop_listint - function deletes first node or head note
 * @head: pointer to first node or element.
 * Return: data in first node that is deleted
 * 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!*head || !head)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
