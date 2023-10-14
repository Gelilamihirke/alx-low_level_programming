#include "main.h"
#include <stdlib.h>
/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return:...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, x = 0;
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	z = malloc(x);
	if (z == NULL)
		return (NULL);
	while (j < x)
	{
		z[j] = 0;
		j++;
	}
	return (z);
}
