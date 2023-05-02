#include "lists.h"
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - function counts the number of unique
 * nodes in looped linked list.
 * @head: pointer
 * Return: number of unique nodes in the list
 * 0 if linked list is not looped.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tata, *divine;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tata = head->next;
	divine = (head->next)->next;

	while (divine)
	{
		if (tata == divine)
		{
			tata = head;
			while (tata != divine)
			{
				nodes++;
				tata = tata->next;
			}
			return (nodes);
		}
		tata = tata->next;
		divine = (divine->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function prints a list.
 * @head: pointer
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (nodes);
}
