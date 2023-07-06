#include "main.h"
#include <unistd.h>
/**
 * _putchar - function writes character to stdout
 * @c: character to be printed
 * Return: 1 on success
 * -1 on error and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
