#include "main.h"
#include<stdlib.h>

/**
 *array_range - print from min to max
 *@min: min value passed
 *@max: max value passed
 *Return: pointer to array or null
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * (size));
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = min + i;
		}
		return (p);
	}
	return (NULL);
}
