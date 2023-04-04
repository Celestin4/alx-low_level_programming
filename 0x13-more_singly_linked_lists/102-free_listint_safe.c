#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t list_len = 0;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		if (*head > (*head)->next)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			list_len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			list_len++;
			break;
		}
	}

	return (list_len);
}

