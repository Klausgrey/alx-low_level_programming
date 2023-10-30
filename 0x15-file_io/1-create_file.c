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
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	int check, len;

	if ((fd < 0) || (filename == NULL))
	return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
	len++;
	check = write(fd, text_content, len);
	close(fd);
	if (check < 0)
	return (-1);
	return (1);
}
