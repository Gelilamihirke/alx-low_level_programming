#include"main.h"
/**
 * read_textfile - reads a text file
 * @filename: f-name
 * @letters: numbers of letters
 *
 * Return:.....
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
	if (nrd > 0)
	{
		buf[nrd] = '\0';
		nwr = write(STDOUT_FILENO, buf, nrd);
	}
	else
	{
		nwr = nrd;
	}
	close(fd);
	free(buf);
	return (nwr);
}

