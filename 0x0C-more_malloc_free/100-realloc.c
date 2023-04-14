#include "main.h"
#include<stdlib.h>

/**
**_realloc - reallocate memory
*@ptr: existing pointer to memory
*@old_size: existing mem size
*@new_size: new size to be allocated
*Return: null or a ptr to new memory
*
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(sizeof(unsigned int) * new_size);
	if (new_size < old_size && new_size > 0)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(sizeof(unsigned int) * new_size);

	}
	return (ptr);
}
