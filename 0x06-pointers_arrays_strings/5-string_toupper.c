#include "main.h"
/**
 * string_toupper - lower case to upper
 * @string: the string that is about to change
 * Return: pointer of the chenged string
 */
char *string_toupper(char *string)
{
	int ind = 0;

	while (string[ind])
	{
		if (string[ind] >= 'a' && string[ind] <= 'z')
			string[ind] -= 32;
		ind++;
	}
	return (string);
}
