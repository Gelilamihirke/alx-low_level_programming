#include "function_pointers.h"
/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ....
 * Return: ...
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
