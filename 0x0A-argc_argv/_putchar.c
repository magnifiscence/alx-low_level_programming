#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed.
 * Return: 1 on success and -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
