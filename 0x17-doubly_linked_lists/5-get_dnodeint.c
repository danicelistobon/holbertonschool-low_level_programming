#include "lists.h"
/**
* *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*
* @head: list given
*
* @index: index of the node, starting from 0
*
* Return: the int of the node, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (tmp)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
