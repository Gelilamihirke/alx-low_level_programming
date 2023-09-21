#include "main.h"
/**
 * reverse_array - It reverses the content of the arrray
 * @a: the array that is going to be reversed
 * @n: the num of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, ind;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		temp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = temp;
	}
}
