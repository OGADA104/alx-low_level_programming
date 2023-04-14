#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
**array_range - array of integers
*@min: minimum array
*@max: max array
*Return: pointer to created array
*
*
*
*/
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min % 1 != 0 || max % 1 != 0)
		return (NULL);
	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}
