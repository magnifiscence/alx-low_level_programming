#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated.
 * Return: the string length.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string that is pointed to by src
 * including (\0) which is the terminating null byte to
 * the buffer pointed to by dest.
 * @src: string that is to be copied.
 * @dest: pointer to the buffer where the string is copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age.
 * @owner: dogs owner.
 * Return: pointer to new dog return (success)
 * otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
