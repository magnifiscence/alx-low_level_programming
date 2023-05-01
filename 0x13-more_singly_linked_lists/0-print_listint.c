#include "lists.h"
/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to linked list of type listint_t
 * Return: function returns the number of nodes in linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
