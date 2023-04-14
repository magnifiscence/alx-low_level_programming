#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - function reallocates block of memory using
 * malloc and free.
 * @pointer: pointer to the memory previously allocated
 * by malloc.
 * @old_size: allocated memory size for pointer
 * @new_size: new size of newly allocated memory block.
 * Return: pointer to newly allocated memory block.
 * NUll: if new_size equals 0 and pointer is not NULL
 * then call is equvilent to free(pointer)
 */
void *_realloc(void *pointer, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *old_pointer;
	unsigned int i;

	if (new_size == old_size)
		return (pointer);
	if (new_size == 0 && pointer)
	{
		free(pointer);
		return (NULL);
	}
	if (!pointer)
		return (malloc(new_size));
	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);
	old_pointer = pointer;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = old_pointer[i];
	}
	free(pointer);
	return (pointer1);
}
