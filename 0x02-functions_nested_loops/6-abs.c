#include "main.h"
/**
 * _abs - computes the abs
 * @c: The number to be compute
 * Return: Absolute
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
