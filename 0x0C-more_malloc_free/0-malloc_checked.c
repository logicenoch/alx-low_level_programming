#include "main.h"
/**
 *malloc_checked - Allocates memory using pointer
 *@b: input
 *Return: a pointer or 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	*ptr = b;

	return (ptr);
}
