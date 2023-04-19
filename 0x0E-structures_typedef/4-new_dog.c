#include "main.h"
#include "dog.h"
#include<stdlib.h>
/**
*new_dog - creates a new dog
*@name: name of dog
*@age: age of new dog
*@owner: owner of new dog
*Return: null or pointer to dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_d = malloc(sizeof(struct dog));

	if (n_d == NULL)
		return (NULL);
	n_d->name = name;
	n_d->age = age;
	n_d->owner = owner;
	return (n_d);
}
