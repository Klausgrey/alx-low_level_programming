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
	int i = 0, len = 0;

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if ((file < 0) || (filename == NULL))
	return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (text_content[len] != '\0')
	len++;
	i = write(file, text_content, len);
	close(file);
	if (i < 0)
	return (-1);
	return (1);
}
