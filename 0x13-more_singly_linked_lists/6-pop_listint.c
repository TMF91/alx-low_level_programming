#include "lists.h"

/**
 * pop_listint - a deleting the head node of a linked list
 * @head: points to the first element in the list
 *
 * Return: the data in the elements deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
