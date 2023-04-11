#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function concatenates two strings
 * @n1: input
 * @n2: input
 * Return: concat n1 and n2 if success
 * NULL on failure
 */
char *str_concat(char *n1, char *n2)
{
	char *concat;
	int i;
	int c;

	if (n1 == NULL)
		n1 = "";
	if (n2 == NULL)
		n2 = "";
	i = 0;
	c = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[c] != '\0')
		c++;
	concat = malloc(sizeof(char) * (i + c + 1));
	if (concat == NULL)
		return (NULL);
	while (n1[i] != '\0')
	{
		concat[i] = n1[i];
		i++;
	}
	while (n2[c] != '\0')
	{
		concat[i] = n2[c];
		i++;
		c++;
	}
	concat[i] = '\0';
	return (concat);
}
