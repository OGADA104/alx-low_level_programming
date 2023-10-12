#include <stddef.h>
#include <stdio.h>
#include"lists.h"
/**
 * print_dlistint - Print all the elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count = count + 1;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
