#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
*
* @head: list
*
* Return: the head nodes data (n)
*/
int pop_listint(listint_t **head)
{
	int cpnum = 0;
	listint_t *temp;

	if (*head)
	{
		cpnum = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (cpnum);
}
