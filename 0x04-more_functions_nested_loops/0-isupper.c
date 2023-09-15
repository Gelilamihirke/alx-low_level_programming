#include "main.h"
/**
 * _isupper - determine if it is upper case
 * @a: Number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 98)
	{
		return (1);
	}
	else
		return (0);
}
