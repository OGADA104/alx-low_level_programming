#include "main.h"
#include<stdlib.h>

/**
 *_realloc - reallocate memory
 *@ptr: pointer to existing memory
 *@old_size: old size of memory
 *@new_size: new size to be allocated
 *Return: null or pointer to new memory
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (new_ptr);
}
