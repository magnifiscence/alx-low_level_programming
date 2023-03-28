#include "main.h"
/**
 * 4-print_rev.c - prints in reverse
 * Description: A function that prints in reverse followed by a new line
 * @s: string
 * @a: variable
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (a = longi; a > 0; a++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
