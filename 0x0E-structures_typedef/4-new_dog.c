#include "dog.h"
#include<stdlib.h>
#include<string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len;
	int owner_len;
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	name_len = strlen(name);
	owner_len = strlen(owner);
	new_dog_ptr->name = malloc(name_len + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->owner = malloc(owner_len + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
