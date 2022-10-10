#include <stdio.h>
#include "dog.h"
/**
 *new_dog - creates  a new dog struct
 *@name: the name arg.
 *@age: the age arg.
 *@owner: the owner arg.
 *Return: dog_t object
 */

void init_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (new_dog);
}
