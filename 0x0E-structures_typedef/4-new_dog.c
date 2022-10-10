#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates  a new dog struct
 *@name: the name arg.
 *@age: the age arg.
 *@owner: the owner arg.
 *Return: dog_t object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
