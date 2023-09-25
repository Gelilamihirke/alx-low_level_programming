#include "main.h"
/**
 * _memcpy - starting point
 * @d: input
 * @s: input
 * @n: input
 * Return: 0
 */
char *_memcpy(char *d, char *s, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		d[j] = s[j];
		j++;
	}
	return (d);
}
