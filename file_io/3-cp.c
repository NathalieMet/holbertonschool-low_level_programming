#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main- copies the content of a file to another file.
 * @argc:name of the file
 * @argv:text content
 * Return: int
 */
int main(int argc, char **argv)
{int fd_from = 0;
	int fd_to = 0;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98); }
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	close(fd_from);
	exit(99); }
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		close(fd_to);
		exit(99); }}
if (bytes_read == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	close(fd_from);
	close(fd_to);
	exit(98); }
if (close(fd_from) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	close(fd_to);
	exit(100); }
if (close(fd_to) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100); }
return (0); }
