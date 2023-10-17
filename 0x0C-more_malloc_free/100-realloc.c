#include "main.h"
#include <stdlib.h>

/**
 * _realloc - ...
 * @ptr: ..
 * @old_size: ..
 * @new_size:..
 * Return: ..
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max ; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}