#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to standered output.
 * @c: character to be printed.
 * Return: 1 on success, -1 is returned on failure
 * and errno is printed appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
