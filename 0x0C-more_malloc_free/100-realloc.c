#include "main.h"
/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to the memory previously allocated with a call to malloc.
 *@old_size: size, in bytes, of the allocated.
 *@new_size: the new size, in bytes of the new memory block.
 *Return: pointer to the array output
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *extend;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		extend = malloc(new_size);
		if (extend == NULL)
			return (NULL);
		return (extend);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	extend = malloc(new_size);

	if (extend == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*((char *)extend + i) = *((char *)extend + i);

	free(ptr);

	return ((void *) extend);
}
