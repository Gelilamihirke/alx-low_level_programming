#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	FILE *src, *dest;
	char buf[BUF_SIZE];
	size_t n;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source destination\n", argv[0]);
		exit(1);
	}
	src = fopen(argv[1], "r");
	if (src == NULL)
	{
		perror("Error opening source file");
		exit(2);
	}
	dest = fopen(argv[2], "w");
	if (dest == NULL)
	{
		perror("Error opening destination file");
		fclose(src);
		exit(3);
	}
	while ((n = fread(buf, 1, BUF_SIZE, src)) > 0)
	{
		if (fwrite(buf, 1, n, dest) != n)
		{
			perror("Error writing to destination file");
			exit(4);
		}
	}
	if (ferror(src))
	{
		perror("Error reading source file");
		exit(5);
	}
	fclose(src);
	fclose(dest);
	return (0);
}
