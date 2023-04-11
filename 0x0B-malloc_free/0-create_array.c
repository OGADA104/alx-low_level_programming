#include "main.h"
#include<stddef.h>
#include<stdlib.h>
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
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (sizeof(arr) == 0)
		{
			return (NULL);
		}
		else
		{
			arr[i] = c;
		}
	}
	return (arr);
}
