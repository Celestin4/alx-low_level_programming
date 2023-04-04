#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to the first element
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (number);
}
