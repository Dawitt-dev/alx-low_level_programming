#include "dog.h"
#include <stddef.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 *@d: pointer to the dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 * Description: This fun initializes a dog structure with the provided
 * values for name, age, and owner.
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
