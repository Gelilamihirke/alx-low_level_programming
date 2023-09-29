#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural root num
 * @n: the input num
 * Return: the natural squ root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural squ root
 * @n: num to calculate
 * @i: iterate num
 * Return: the natural squ root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (i);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
