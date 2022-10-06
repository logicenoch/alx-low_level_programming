#include "main.h"
/**
 *malloc_checked - Allocates memory using pointer
 *@b: input
 *Return: a pointer or 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr));
	}

	if (ptr == NULL)
		return (98);
	*ptr = b;

	return (ptr);
}
