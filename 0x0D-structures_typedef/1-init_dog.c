#include "dog.h"

/**
 *init_dog - initializes every element of dog
 *@d: A pointer to the datatype dog
 *@name: A pointer to the element name of dog
 *@age: The value element age of dog
 *@owner: The pointer to element owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
