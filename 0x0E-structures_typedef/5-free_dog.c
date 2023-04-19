#include "dog.h"
#include "main.h"
#include<stdlib.h>
/**
 *free_dog - frees memory allocated to dog
 *@d: pointer to dog
 *
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
