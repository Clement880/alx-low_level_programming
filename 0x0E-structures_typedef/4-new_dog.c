#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: doggs name
 * @age: new dogs age
 * @owner: owner of the new dog
 * Return: pointer should point to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t t, v, w;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (t = 0; name[0] != '\0'; t++)
		;
	t++;
	dog->name = malloc(sizeof(char) * t);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (w = 0; w < t; w++)
		dog->name[w] = name[w];
	dog->age = age;
	for (v = 0; owner[v] != '\0'; v++)
		;
	v++;
	dog->owner = malloc(sizeof(char) * v);
		if (dog->owner == NULL)
		{
			free(dog->owner);
			free(dog);
			return (NULL);
		}
		for (t = 0; t < v; t++)
			dog->owner[t] = owner[t];
		return (dog);
}
