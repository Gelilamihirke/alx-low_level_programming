#include "main.h"
/**
 * _strcmp - compares pointers to two string
 * @a: a pointer to the first one
 * @b: a pointer to the second one
 * Return: If str1 < str2, the negative diffe
 * if str1 == str2, 0
 * if str1 > str2, the posetive difference of the first unmached char
 */
int _strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
