#include "main.h"

/**
 * 
 * 
 * 
*/
char *_malloc(char *buffer)
{
  char *buf;

  buf = malloc(sizeof(char) * 1024);
  if (buf == NULL)
  {
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", buffer);
		exit(99);
	}
  return (buf);
}