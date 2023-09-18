#include "main.h"
/**
 * rev_string - reversing a string
 * @a: the string to be reverseed
 * Return: void
 */
void rev_string(char *a)
{
	int len = 0;
	char temp;
	int index = 0;

	while (a[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		temp = a[index];
		a[index] = a[len - index - 1];
		a[len - index - 1] = temp;
	}
}

