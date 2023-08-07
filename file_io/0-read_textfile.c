#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename:decimal number
 * @letters:is the number of letters it should read and print
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer = 0;
	ssize_t bytes_read;
	ssize_t bytes_written;

if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
	close(fd);
	return (0);
}
buffer = (char *) malloc(letters + 1);
if (buffer == NULL)
	{
close(fd);
return (0);
	}
bytes_read = read(fd, buffer, letters);
close(fd);
if (bytes_read == -1)
	{
	free(buffer);
	return (0);
	}

	buffer[bytes_read] = '\0';

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);

if (bytes_written != bytes_read)
	{
	return (0);
	}
	return (bytes_written);
}
