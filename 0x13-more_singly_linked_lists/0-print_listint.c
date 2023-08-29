#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head node of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}