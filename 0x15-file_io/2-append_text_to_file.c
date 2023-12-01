#include "main.h"
#include <string.h>
/**
 * append_text_to_file - fun that app a text
 * @filename : name of the file
 * @text_content: the txt
 * Return: 1 for succ, 0 for falier
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	nwr = write(fd, text_content, strlen(text_content));
	if (nwr == -1)
		return (-1);
	close(fd);
	return (1);
}
