#include "main.h"
/**
 * _print_rev_recursion -revers the string
 * @s: string that is going to be reveresed
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
