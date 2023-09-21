#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @string: The string to be capitalized
 * Return: A pointer to the changed string
 */

char *cap_string(char *string)

{
	int ind = 0;

	while (string[ind])
	{
	while (!(string[ind] >= 'a' && string[ind] <= 'z'))
	ind++;
	if (string[ind - 1] == ' ' ||
	string[ind - 1] == '\t' ||
	string[ind - 1] == '\n' ||
	string[ind - 1] == ',' ||
	string[ind - 1] == ';' ||
	string[ind - 1] == '.' ||
	string[ind - 1] == '!' ||
	string[ind - 1] == '?' ||
	string[ind - 1] == '"' ||
	string[ind - 1] == '(' ||
	string[ind - 1] == ')' ||
	string[ind - 1] == '{' ||
	string[ind - 1] == '}' ||
	ind == 0)
	string[ind] -= 32;
	ind++;
	}
	return (string);
}
