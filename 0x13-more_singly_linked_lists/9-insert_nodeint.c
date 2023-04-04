#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,at a given position
 * @head: pointer to the first node
 * @idx: field for new node
 * @n: data of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *cur = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; cur && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = cur->next;
			cur->next = node;
			return (node);
		}
		else
			cur = cur->next;
	}

	return (NULL);
}
