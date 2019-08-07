#include "lists.h"
/**
* *insert_nodeint_at_index - inserts a new node at a given position
*
* @head: list given
*
* @idx:  is the index of the list where the new node should be added
*
* @n: numbers
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
		temp = *head;

	while (i != idx - 1)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		else
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
