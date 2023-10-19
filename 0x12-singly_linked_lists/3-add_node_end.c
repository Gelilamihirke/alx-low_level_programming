#include "lists.h"
list_t *create_node(const char *str);
int len(const char *str);
/**
 * add_node_end - ..
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;


	tmp = *head;
	if (head == NULL)
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}
/**
 * create_node: ...
 * @str:..
 * Return: ...
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - ...
 * @str: ..
 * Return: ...
 */
int len(const char *str)
{
	int j;

	if (str == NULL)
		return (0);
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
