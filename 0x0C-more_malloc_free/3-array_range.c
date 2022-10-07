#include "main.h"
/**
 *array_range - Creates an array containing integers between the range min and max.
 *@min: Minimum value
 *@max: maximum value
 *Return: pointer to the array output
 */
int *array_range(int min, int max)
{
	int *arr;

	int len = max - min, i;
	arr = malloc(sizeof(*arr) * len);

	if (min > max) 
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}