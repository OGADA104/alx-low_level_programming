#include "function_pointers.h"
#include<stdlib.h>
#include<stddef.h>
/**
 *
 *
 *
 *
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		exit(0);
	if (array == NULL)
		exit(0);
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
