#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct to be initialized
 * @d: pointer to the struct of the new dog
 * @name:the name of the new dog
 * @age: the age of new dog
 * @owner: owner of the new dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
