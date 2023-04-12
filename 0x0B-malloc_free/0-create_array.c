#include "main.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
**create_array - creates an array of
*@size: size of character string
*@c: input character string
*Return: pointer to array
*
*
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
