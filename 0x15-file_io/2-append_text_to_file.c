#include "main.h"
/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: represents pointer to the name of the file.
 * @text_content: string of characters appended at the end of file.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
