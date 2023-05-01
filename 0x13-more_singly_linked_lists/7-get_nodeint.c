#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * or node at a particular index in a list.
 * @index: represents index of node to be returned.
 * @head: pointer to first node in the list.
 * Return: it returns pointer to the node we are looking for
 * NULL if node does not exist;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*lets declare a pointer to the list*/
	listint_t *temp = head;
	unsigned int j = 0;

	if (temp == NULL)
		return (NULL);
	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp);
}
