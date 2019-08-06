#include "lists.h"
/**
* *add_nodeint_end - adds a new node at the end of a listint_t list
*
* @head: list given
*
* @n: numbers
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *first;

	new_node = malloc(sizeof(listint_t));

	first = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = new_node;

	return (new_node);
}
