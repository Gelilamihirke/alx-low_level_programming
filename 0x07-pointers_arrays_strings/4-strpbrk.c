#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - starting point
 * @s: inpou
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	i = 0;

	while (s[i] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}

