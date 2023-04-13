#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
**_calloc - a function similar to calloc
*@nmemb: nmemb
*@size: size of array
*Return: pointers null or p
*
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
