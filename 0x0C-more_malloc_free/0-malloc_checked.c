#include "main.h"
#include<stdlib.h>
/**
 **malloc_checked - allocate memory using malloc
 *@b: input argument
 *Return: pointer or 98 if fails
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	if (b == '\0')
		exit(98);
	p = malloc(b);
	if (p != NULL)
	{
		return (p);
	}
	exit(98);
}
