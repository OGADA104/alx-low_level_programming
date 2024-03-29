#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
		count++;
	}
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}
	return (count);
}
