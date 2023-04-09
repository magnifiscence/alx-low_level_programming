#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of program
 * Description: prints the name of a program followed
 * by new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
