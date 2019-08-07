#include "lists.h"
/**
* *get_nodeint_at_index - returns the nth node of a listint_t linked list
*
* @head: list given
*
* @index: is the index of the node, starting at 0
*
* Return: the nth node, or NULL if the node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
		return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
