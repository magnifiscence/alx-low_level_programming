#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charcter n to stdout
 * @n: the character to print
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */

int _putchar(char n)
{
	return (write(1, &n, 1));
}
