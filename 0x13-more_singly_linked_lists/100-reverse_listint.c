#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head_ptr)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head_ptr)
	{
		next_node = (*head_ptr)->next;
		(*head_ptr)->next = prev_node;
		prev_node = *head_ptr;
		*head_ptr = next_node;
	}

	*head_ptr = prev_node;

	return (*head_ptr);
}
