#include<stdio.h>
/**
 * main - Prints the size of various types a based on
 * the computer it is compiled and run on..
 * both 32 bit and 64 bit computer
 * Return: Always 0.
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s)\n", sizeof(float));
	return (0);
}
