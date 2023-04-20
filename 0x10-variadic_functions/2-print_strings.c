#ifndef SEPERATOR_H
#define SEPERATOR_H

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function prints strings followed by a newline
 * @separator: string to be printed between strings
 * @n: number of arguments passed to function
 * @...: ellipse
 * description: if seperator is NULL it is not printed
 * if one of the string is NULL (nill) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("nill)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
#endif
