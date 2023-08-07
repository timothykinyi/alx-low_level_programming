#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to name of the file to create.
 * @text_content: A pointer to string to write to the file.
 * Return: If function fails - -1.
 *          Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, le);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
