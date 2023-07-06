#include "main.h"
/**
 * get_endianness - function verifies if machine is a big or small endian
 * Return: 1 for small
 * 0 for big
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
