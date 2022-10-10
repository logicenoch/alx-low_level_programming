#include <stdio.h>
#include "dog.h"
/**
 *print_dog - initializes the content of a dog.
 *@d: pointer to the strucure object.
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}