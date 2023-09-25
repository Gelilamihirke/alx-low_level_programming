#include <stdio.h>
#include "main.h"
/**
 * _strchr - starting point
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}
	return (NULL);
}

