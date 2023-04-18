#include "dog.h"
#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
*init_dog - innitialise dog
*@dog -  struct
*@d: pointer to dog
*@name: dog name
*@age: age of dog
*@owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
