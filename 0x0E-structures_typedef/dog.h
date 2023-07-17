#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Represents a dog with its attributes
 * @name: Pointer to a character representing the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to a character representing the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
