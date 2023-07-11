#include "main.h"
/**
 * _strlen - finds string length
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0';)
	len++;
	return (len);

/**
 * append_text_to_file - function appends text at the end of file.
 * @filename: pointer
 * @text_content: string to add to end of file
 * Return: -1 error
 * 1 for success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_wrote;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
