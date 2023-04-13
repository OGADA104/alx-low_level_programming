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
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min + 1); i++)
	{
		p[i] = min + 1;
	}
	return (p);
}
