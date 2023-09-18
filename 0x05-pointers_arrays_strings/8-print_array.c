#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element
 * @a: array of int
 * @n: num of element pf the array that is going to be printed
 * Return: empty
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
