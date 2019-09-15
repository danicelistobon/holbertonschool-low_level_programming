#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
*
* @h: list given
*
* Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
