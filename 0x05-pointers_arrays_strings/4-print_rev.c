#include "main.h"
#include <stdio.h>
/**
 * print_rev - print the reverse of a string
 * @a: the string to be print
 * Return: empty
 */
void print_rev(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
}
