#include "lists.h"
/**
 * listint_len - function returns number of elements in a linked list.
 * @h: pointer to linked list.
 * Return: number of nodes or elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
