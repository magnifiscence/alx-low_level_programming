#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - function allocates 1024 bytes fo a buffer.
 * @file: represents filename buffer is storing char for
 * Return: pointer to newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - function closes fd.
 * @fd: file discriptor
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, " Error: cannot close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - function copies the content of a file to another.
 * @argc: arguments number
 * @argv: array pointers to arguments
 * Description: if argument count is incorrect - exit code 97.
 * if file_from does not exist or unable to be read
 * exit code 98
 * if file_to cannot be created or written exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int to, from, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
