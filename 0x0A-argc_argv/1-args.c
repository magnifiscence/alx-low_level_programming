#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints the number of arguments
 * passed to the program
 * @argc: number of arguments
 * @argv: argument vector or array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
