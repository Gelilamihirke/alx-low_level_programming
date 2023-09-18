#include <stdio.h>
/**
 * swap_int - swaping the two integers
 * @x: the first num
 * @y: the second num
 * Return: empty
 */
void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
