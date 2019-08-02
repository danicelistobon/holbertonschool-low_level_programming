#include "lists.h"
/**
* _strlen - returns the length of a string
*
* @s: pointer
*
* Return: length
*/
int _strlen(char *s)
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
* *add_mode - adds a new node at the beginning of a 'list_t' list
*
* @head: list given
*
* @str: string
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || list == NULL)
		return (NULL);

	list->str = strdup(str);
	list->len = _strlen(str);
	list->next = *head;
	*head = list;

	return (list);
}
