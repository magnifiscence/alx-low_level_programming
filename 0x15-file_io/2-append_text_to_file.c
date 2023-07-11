#include "main.h"
/**
 * append_text_to_file - function appends text at the end of file.
 * @filename: pointer
 * @text_content: string to add to end of file
 * Return: -1 error
 * 1 for success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	return (-1);
	close(0);
	return (1);
}
