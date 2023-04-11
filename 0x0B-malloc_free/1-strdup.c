#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * _strdup - function returns pointer to newly allocated
 * space in memory which contains a copy of the string
 * given as parameter
 * @s: char
 * Return: 0 on success
 * NULL if s = NULL or there is insufficient memory space
 */
char *_strdup(char *s)
{
	char *c;
	int i = 0;
	int r = 0;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	for (r = 0; s[r]; r++)
		c[r] = s[r];
	return (c);
}
