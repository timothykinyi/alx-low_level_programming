#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print STDOUT.
 * @filename: text file being read
 * @letters: number of letters be read
 * Return: w- actual number of bytes read and printed
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	t = read(f, bu, letters);
	w = write(STDOUT_FILENO, bu, t);

	free(bu);
	close(f);
	return (w);
}
