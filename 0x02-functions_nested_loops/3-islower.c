#include "main.h"
/**
 * _islower - entry point
 * @c: character to check if it islowercase
 * Return: 1 for lowercase character or 0 for anythinf else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
