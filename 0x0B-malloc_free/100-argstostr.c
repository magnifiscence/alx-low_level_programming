#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates arguments of a program
 * each argument is followed by \n
 * @ac: integer input
 * @av: double pointer array
 * Return: 0 if success
 * NULL if ac == 0; || av == NULL || if function fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int n = 0;
	int r = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
