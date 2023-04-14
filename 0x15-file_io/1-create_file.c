#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - a function that creates a file.
* @filename: the pointer that points to the file.
* @text_content: a pointer to the strings in the file.
* Return: -1 if it fails.
*/

int create_file(const char *filename, char *text_content)
{
int o, w, lenght = 0;

if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)

for (lenght = 0; text_content[lenght]; lenght++)

o = open(filename, O_CREAT | O_RDWR  | O_TRUNC, 0600);
w = write(o, text_content, lenght);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
