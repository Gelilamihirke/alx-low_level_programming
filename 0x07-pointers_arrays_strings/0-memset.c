#include "main.h"
/**
 * _memset - starting point
 * @a: pointed destination
 * @c:the constant byte
 * @b: bytes
 * Return: 0
 */
char *_memset(char *a, char c, unsigned int b)
{
	unsigned int j = 0;

	while (j < b)
	{
		a[j] = c;
		j++;
	}
	return (a);
}
