#include "main.h"
/**
 * cap_string - it capitalizes every word that is found
 * in the string
 * @string: the string that will be capitalized
 * Return: the pointer to the capitalized string
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
