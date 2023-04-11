#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints multiples of two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return (0)
 */
int main(int argc, char *argv[])
{
	int m1 = 0;
	int m2 = 0;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
