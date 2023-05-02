#include "lists.h"
/**
 * free_listint_safe - function frees a list.
 * @h:represents head.
 * Return: size of list that was freed.
 * sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	/*lets declare and assign values*/
	int difference;
	listint_t *temp;
	size_t len = 0;

	if (!*h || !h)
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
