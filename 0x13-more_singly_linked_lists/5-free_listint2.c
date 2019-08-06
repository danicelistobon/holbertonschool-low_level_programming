#include "lists.h"
/**
* free_listint2 - frees a listint_t list
*
* @head: list
*
* Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *first;

	while (*head != NULL)
	{
		first = (*head)->next;
		free(*head);
		*head = first;
	}
}
