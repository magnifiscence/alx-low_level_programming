#include "main.h"
/**
 * _strncpy - c function that copies a string, including the
 * terminating null byte, using atmost inputed number of bytes.
 * If the length of the source string is less than the miximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * works identically to the standered library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
