#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* append_text_to_file - function that appendsa file
* @filename: pointer to a file
* @text_content: pointer to a string.
* Return: -1 if error occurs.
*/

int append_text_to_file(const char *filename, char *text_content)

{
	int op = open(filename, O_WRONLY | O_APPEND);
	int len = 0;
int check;

	if ((op < 0) || (filename == NULL))
		return (-1);
	if (text_content == NULL)
	{
		close(op);
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
		len++;
	check = write(op, text_content, len);
	if (check < 0)
		return (-1);
	return (1);
}
