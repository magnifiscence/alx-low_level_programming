#include "lists.h"
#include <stdio.h>
/**
 * print_list - function prints all elements of a linked list
 * @h: ponter to the linklist to print
 * Return: function returns number of nodes printed
 * if str is NULL print [0] nil
 */
size_t print_list(const list_t *h)
{
	s = 0;
	size_t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
