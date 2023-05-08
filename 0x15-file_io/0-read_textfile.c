#include "main.h"
/**
 * read_textfile - function reads a text file and prints it
 * to POSIX standared output.
 * @letters: it is the number of letters it should read and print.
 * @filename: represents text file being read.
 * Return: returns the actual number of letters it could read
 * and print.
 * if file cannot be opened or read return 0
 * 0 if file name is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*lets declare a file pointer and file discriptor variable*/
	ssize_t fd;
	ssize_t t;
	ssize_t w;
	char *p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	t = read(fd, p, letters);
	w = write(STDOUT_FILENO, p, t);

	free(p);
	close(fd);
	return (w);
}
