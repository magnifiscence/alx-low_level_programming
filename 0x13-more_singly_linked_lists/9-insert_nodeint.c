#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a newnode at a given
 * position in a linked list.
 * @n: represents data to be inserted to the newnode or element.
 * @head: represents pointer to first node of the list.
 * @idx: represents index were the new node is inserted.
 * Return: pointer to the newnode
 * NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*lets declare some variables*/
	listint_t *newnode;
	unsigned int j;

	/*lets assign a temporal pointer to the list*/
	listint_t *temp = *head;

	/*lets assign some memory for the list*/
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (j = 1; temp && j < idx; j++)
	{
		if (j == idx)
		{
			newnode->next = temp->next;
	temp->next = newnode;
return (newnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
