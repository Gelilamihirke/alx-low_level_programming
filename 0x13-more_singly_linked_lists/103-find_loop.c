#include "lists.h"
/**
 * find_listint_loop - ...
 * @head: ...
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ps;
	listint_t *prev;

	ps = head;
	prev = head;
	while (head
