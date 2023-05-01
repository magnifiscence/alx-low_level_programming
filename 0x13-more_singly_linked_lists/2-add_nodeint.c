#include "lists.h"
/**
 * add_nodeint - function that adds new node at the begining
 * of a singly linked list.
 * @n: its the data to be inserted at begining of list.
 * @head: its a pointer to the first node in the list.
 * Return: function returns the address of a new element
 * NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*lets declare a node which is a pointer to a list*/
	listint_t *newnode;

	/*lets allocate memory for the node */
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	/*lets assign data values to the node*/
	newnode->n = n;
	/*lets assign address value to the node*/
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
