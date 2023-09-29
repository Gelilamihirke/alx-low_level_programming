#include "main.h"
/**
 * sqrt_a - return the natural num
 * @a: input num
 * @b: iterator
 * Return: square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > 4)
		return (-1);
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - return the square root
 * @n: input num
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
