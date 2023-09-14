#include "main.h"
/**
 * print_sign - print the sign
 * @n:
 * The nimber to be checked
 * Return: 1 for poitive num, 1 for negative num or zero for anything
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
