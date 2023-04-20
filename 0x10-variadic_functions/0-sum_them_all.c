#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function returns sum of all parameters
 * @n: number of parameters passed to function.
 * @...: ellipes
 * Return: sum of parameters
 * if n == 0 return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
		unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
