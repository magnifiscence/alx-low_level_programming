#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line
 * for multiples of three print fizz
 * for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			print("Fize");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d", i);
		} 
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
