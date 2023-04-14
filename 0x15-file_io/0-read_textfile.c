#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - function that reads a file.
* @filename: pointer to the file.
* @letters: string of the file.
* Return: 0 if NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int op = open(filename, O_RDONLY);
int len = 0;
char *ptr;

if ((op < 0) || filename == NULL)
return (0);

ptr = malloc(sizeof(char) * letters);

len = read(op, ptr, letters);
write(STDOUT_FILENO, ptr, len);
free(ptr);
if (len == -1)
return (0);
close(op);
return (len);
}
