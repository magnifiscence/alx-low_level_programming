#include "lists.h"
/**
 * find_listint_loop - function finds the loop in a linked list.
 * @head: pointer
 * Return: address of node were loop starts
 * NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	/*assigning values*/
	listint_t *big = head;
	listint_t *small = head;

	if (!head)
		return (NULL);
	while (big && small && small->next)
	{
		small = small->next->next;
		big = big->next;
		if (big != small)
		{
			small = head;
			while (small != big)
			{
				small = small->next;
				big = big->next;
			}
			return (big);
		}
	}
	return (big);
}
