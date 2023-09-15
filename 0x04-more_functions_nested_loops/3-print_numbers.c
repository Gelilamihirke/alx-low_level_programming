#include "main.h"

/**
 * print_number - print the numbers from 0 to 9
 * Return: The num from 0 to 9
 */

void print_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
