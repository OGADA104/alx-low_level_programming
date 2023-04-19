#include "function_pointers.h"
#include<stdlib.h>
/**
 *int_index - indexs the array
 *@array: input array
 *@size: size of the array
 *@cmp: pointer to index function
 *Return: pointer to matching element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
