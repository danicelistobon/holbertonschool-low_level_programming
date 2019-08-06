#include "lists.h"
/**
* _strlen - returns the length of a string
*
* @s: pointer
*
* Return: length
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
* *add_node_end - adds a new node at the end of a 'list_t' list
*
* @head: list given
*
* @str: string
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *first;

	list = malloc(sizeof(list_t));

	first = *head;

	if (list == NULL)
		return (NULL);

	list->str = strdup(str);
	list->len = _strlen(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = list;

	return (list);
}
