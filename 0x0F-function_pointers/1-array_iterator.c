#include "function_pointers.h"
#include<stdlib.h>
#include<stddef.h>
/**
 *array_iterator - loops throuth the array
 *@array: input array
 *@size: size of the array
 *@action: function pointer to iterator
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		exit(0);
	if (array == NULL || size == 0)
		exit(0);
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
