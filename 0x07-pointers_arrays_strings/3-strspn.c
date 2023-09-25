#include "main.h"
/**
 * _strspn - starting point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
       	unsigned int n = 0;
	unsigned int value = 0;
       	unsigned int check;

	while (s[i] != '\0')
	{
		check = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
			n++;
		}
		i++;
	}
}

