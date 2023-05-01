#include "lists.h"
/**
 * sum_listint - function calculates sum of elements in a list
 * @head: pointer to first node
 * Return: sum of elements.
 */
int sum_listint(listint_t *head)
{
	/*lets declare some variables*/
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
