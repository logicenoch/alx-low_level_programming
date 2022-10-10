#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees the allocated memory
 *@d: pointer to the structure object.
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
