#include "main.h"
/**
 * _strncat - conc two string
 * an inputted num by bytes from src
 * @dest: The string to be appended upon
 * @src:m The string to be appended to dest
 * Return: a pointer to the resulting stringdest
 * @n: The num of bytes from src to be appended to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];
	return (dest);
}
