#include "lists.h"
/**
 * list_len - ...
 * @h: ...
 * Return: ...
 */
size_t list_len(const list_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

