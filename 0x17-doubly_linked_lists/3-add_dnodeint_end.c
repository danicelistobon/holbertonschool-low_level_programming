#include "lists.h"
/**
* *add_dnodeint_end - adds a new node at the end of a dlistint_t list
*
* @head: list given
*
* @n: number
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;

	return (new);
}
