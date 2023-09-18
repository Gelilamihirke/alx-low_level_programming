#include "main.h"
/**
 * _atoi - convert str to int
 * @a: pointer to convert
 * Return: a integer
 */
int _atoi(char *a)
{
	int b = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (a[b])
	{
		if (a[b] == 45)
		{
			min *= -1;
		}
		while (a[b] >= 48 && a[b] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (a[b] - '0');
			b++;
		}
		if (isi == 1)
		{
			break;
		}
		b++;
	}
	ni *= min;
	return (ni);
}
