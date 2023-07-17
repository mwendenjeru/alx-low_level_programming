#include "dog.h"
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Pointer to a character representing the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to a character representing the owner of the dog
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
