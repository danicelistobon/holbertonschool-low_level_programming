#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list of ints in ascending order
*
* @list: list of integers
*
* Return: no return
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (list == NULL)
		return;

	current = *list;

	while (current)
	{
		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = current->next;
	}
}
