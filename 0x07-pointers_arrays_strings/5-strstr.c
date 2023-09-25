#include <stdio.h>
#include "main.h"
/**
 * _strstr - starting point
 * @h: input
 * @n: input
 * Return: 0
 */
char *_strstr(char *h, char *n)
{
	for (; *h != '\0'; h++)
	{
		char *one = h;
		char *two = n;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (h);
	}
	return (NULL);
}
