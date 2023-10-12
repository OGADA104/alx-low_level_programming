#include<stddef.h>
#include "lists.h"

/**
 *sum_dlistint - sum of elements in node
 *@head: pointer to head of node
 *Return: sum of nodes
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}