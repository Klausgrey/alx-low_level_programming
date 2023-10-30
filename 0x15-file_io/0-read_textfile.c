#include "main.h"

/**
 *  * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails,
 * returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	size_t r;

	if (!filename)
	return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(file, buf, letters);
	write(STDOUT_FILENO, buf, r);
	close(file);
	free(buf);
	return (r);
}
