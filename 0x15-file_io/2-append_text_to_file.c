#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the text to append.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	w = write(d, text_content, len);

	if (d == -1 || w == -1)
		return (-1); /* Failed to write to file */

	close(d);

	return (1);
}
