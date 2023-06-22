#include<stddef.h>
#include "function_pointers.h"

/**
 *int_index - get index
 *@array: input array
 *@size: size of array
 *@cmp: function pointer
 *Return: pointer to index or -1
 *
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(aray[i]) != 0)
			return (i);
	}
	return (-1);
}
