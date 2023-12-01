#include"main.h"
#include <string.h>
/**
 * error_file - ...
 * @file_name: ...
 * Return: ....
 */

void error_file(char *file_name)
{
	perror(file_name);
	exit(EXIT_FAILURE);
}
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int source_fd = open(argv[1], O_RDONLY);
	int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	char buffer[BUFSIZ];
	ssize_t bytes_read;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if (source_fd == -1)
		error_file(argv[1]);
	if (dest_fd == -1)
		error_file(argv[2]);
	while ((bytes_read = read(source_fd, buffer, BUFSIZ)) > 0)
	{
		if (write(dest_fd, buffer, bytes_read) != bytes_read)
		{
			error_file(argv[2]);
		}
	}
	if (bytes_read == -1)
		error_file(argv[1]);
	if (close(source_fd) == -1 || close(dest_fd) == -1)
		error_file("close");
	exit(EXIT_SUCCESS);
}
