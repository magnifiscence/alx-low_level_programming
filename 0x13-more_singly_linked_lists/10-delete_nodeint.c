#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes node at a
 * given index of a linked list
 * @index: represents index of node to be deleted
 * @head: pointer to first node.
 * Return: 1 for success and -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*lets declare and assign some values*/
	unsigned int j = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
	return (-1);
	if (index == 0)
{
	*head = (*head)->next;
	free(temp);
	return (1);
}

while (j < index - 1)
{
	if (!temp || !(temp->next))
		return (-1);
	temp = temp->next;
	j++;
}
current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
