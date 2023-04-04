#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = NULL;
	const listint_t *check_node = NULL;
	size_t node_counter = 0;
	size_t new_counter;

	current_node = head;
	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_counter++;
		current_node = current_node->next;
		check_node = head;
		new_counter = 0;
		while (new_counter < node_counter)
		{
			if (current_node == check_node)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return (node_counter);
			}
			check_node = check_node->next;
			new_counter++;
		}
		if (!head)
			exit(98);
	}
	return (node_counter);
}

