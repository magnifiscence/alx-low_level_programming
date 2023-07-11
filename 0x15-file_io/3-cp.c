#include "main.h"
void close_file(int fd);
char *create_buffer(char *file);
/**
 * create_buffer - function assigns 1024 bytes for a buffer
 * @file: file buffer is storing char for
 * Return: pointer to newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s \n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - function closes file discriptors
 * @fd: discriptor that is to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd % d \n", fd);
		exit(100);
	}
}
/**
 * main - function copies content of one file to another.
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 success
 * description:
 * argument count incorrect - exit code 97.
 * source file NULL or cant be read - exit code 98
 * destination file cannot be created or written to - exit code 99
 * failure to close both file - exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage : cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error : can't read from file %s \n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s \n", argv[2]);
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
