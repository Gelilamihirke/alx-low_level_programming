#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	if (nrd == -1)
	{
		free(buf);
		return (0);
	}
	buf[nrd] = '\0';
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(fd);
	free(buf);
	return (nwr);
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <filename> <number of letters>\n", argv[0]);
		return (1);
	}
	size_t letters = atoi(argv[2]);
	if (read_textfile(argv[1], letters) == 0)
	{
		perror("Error reading the file");
		return (1);
	}
	return (0);
}
