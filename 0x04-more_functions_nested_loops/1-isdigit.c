#include "main.h"
/**
 * _isdigit - Determine if it is digit
 * @n: The num to be checked
 * Return: 1 for a char that will be a digit or 0 for any else
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
		return (0);
}
