#include "main.h"

/**
 * append_text_to_file - Appends text the end of a file.
 * @filename: A pointer to the name the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails filename is NULL - -1.
 *         If the file does not exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, v, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	v = write(o, text_content, le);

	if (o == -1 || v == -1)
		return (-1);

	close(o);

	return (1);
}
