#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename:name of the file
 * @text_content:text content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	bytes_written = write(fd, text_content, strlen(text_content));
	close(fd);

	if (bytes_written == -1)
	{
		return (-1);
	}

	return (1);
}
