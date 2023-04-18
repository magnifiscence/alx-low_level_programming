#ifndef _FILE_H
#define _FILE_H
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints name of file from which
 * it was compiled.
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
#endif
