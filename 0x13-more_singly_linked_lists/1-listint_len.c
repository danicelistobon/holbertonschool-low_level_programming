#include "lists.h"
/**
* listint_len - returns the number of elements in a linked listint_t list
*
* @h: list given
*
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
