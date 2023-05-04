#include "main.h"
/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 * @b: it points to string of values 0 and 1.
 * Return: the converted number
 * 0 if b is NULL or there is one more characters
 * in the string that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci_val = 0;
	int j;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[j] - '0');
	}
	return (deci_val);
}
