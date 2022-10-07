#include "main.h"

/**
 *_calloc - Allocates memory for arrays
 *@nmemb: Number of elements in the array
 *@size: size of the array in bytes
 *Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (*arr)
		*arr++ = 0;

	return (arr);
}