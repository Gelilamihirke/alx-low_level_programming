#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @x: the string that is going to be print
 * Return: 0
 */
void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*x);
	x++;
	_put_recrsion(x);
}
