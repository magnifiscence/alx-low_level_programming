#include "main.h"
#include <stdlib.h>
/**
 * create_array - program that creats an array of characters c
 * initialises it with specific character
 * @size: array size
 * @c: character to be assigned
 * Return: NULL if size = 0,
 * pointer to array or null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
