#include "main.h"
/**
 * _strcat - it concatenates two strings.
 * @dest: inputed value
 * @src: inputed value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
