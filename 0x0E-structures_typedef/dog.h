#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structured data for dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: 0wner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
