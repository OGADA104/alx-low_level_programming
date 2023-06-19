#include "dog.h"
#include<stddef.h>
#include "main.h"
/**
 *init_dog - initialise dog struct
 *@d: dog toinitialize
 *@name: nameof dog
 *@age: age of dog
 *@owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
