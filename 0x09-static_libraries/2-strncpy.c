#include "main.h"
/**
 * _strncpy - copy a strring
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		j++;
	}
	return (dest);
}
