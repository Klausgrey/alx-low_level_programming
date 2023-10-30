#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to file
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t w;
	int i;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if ((file == -1) || (filename == NULL))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	w = write(file, text_content, i);
	if (w != 0)
	return (-1);
	close(file);
	return (1);
}
