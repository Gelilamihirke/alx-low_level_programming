#include "main.h"
#define BUFFER_SIZE 1024
#define USAGE_EXIT 97
#define READ_ERROR 98
#define WRITE_ERROR 99
#define CLOSE_ERROR 100
/**
 * close_files - ...
 * @src_fd: ...
 * @dest_fd: ...
 * Return: ...
 */
void close_files(int src_fd, int dest_fd)
{
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(CLOSE_ERROR);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(CLOSE_ERROR);
	}
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, num_read_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(USAGE_EXIT);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(READ_ERROR);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT
	| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_files(src_fd, dest_fd);
		exit(WRITE_ERROR);
	}
	while ((num_read_bytes = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(dest_fd, buffer, num_read_bytes) != num_read_bytes)
		{
			dprintf(STDERR_FILENO, "Error writing to %s\n", argv[2]);
			close_files(src_fd, dest_fd);
			exit(WRITE_ERROR);
		}
	}
	close_files(src_fd, dest_fd);
	exit(EXIT_SUCCESS);
}
/**
 * close_files - ...
 * @src_fd: ...
 * @dest_fd: ...
 * Return: ...
 */
void close_files(int src_fd, int dest_fd)
{
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(CLOSE_ERROR);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(CLOSE_ERROR);
	}
}
