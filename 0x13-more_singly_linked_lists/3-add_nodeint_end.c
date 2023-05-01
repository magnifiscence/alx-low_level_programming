#include "lists.h"
/**
 * add_nodeint_end -function that adds a node at the end of a
 * linked list.
 * @n: data to be inserted into new node
 * @head: it represents pointer to the first element of lists.
 * Return: the address of the new element
 * NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
