#include "lists.h"
/**
 * free_listint - ...
 * @head: ...
 * Return: ...
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
