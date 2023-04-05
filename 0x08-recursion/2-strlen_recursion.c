#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured.
 * len: length of string
 * Return te length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
