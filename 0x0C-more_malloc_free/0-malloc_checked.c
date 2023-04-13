#include "main.h"
#include<stdlib.h>
/**
**malloc_checked - check mealloc
*@b: input
*Return: 98 f fails pointer if success
*
*
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
