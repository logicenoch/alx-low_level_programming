#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializes the content of a dog.
 *@d: the strucure object.
 *@name: the name arg.
 *@age: the age arg.
 *@owner: the owner arg.
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
