#include "lists.h"
/**
 * delete_nodeint_at_index - ...
 * @head:...
 * @index: ...
 * Return: ...
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *temp;
	listint_t *node;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (j = 0; j < index - 1 && temp != NULL && index != 0; j++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
