#include "lists.h"
/**
* free_dlistint - free a dlistint_t list
*
* @head: list
*
* Return: no return
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
