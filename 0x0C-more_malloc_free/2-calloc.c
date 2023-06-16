#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 *_calloc - calloc
 *@nmemb: no. of members
 *@size: size of array
 *Return: pointer or null
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb < 1 || size < 1)
		return (NULL);
	p = malloc(nmemb * size);
	if (p != NULL)
	{
		memset(p, 0, nmemb * size);
	}
	return (p);
}
