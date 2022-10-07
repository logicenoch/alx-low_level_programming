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

	if (min > max) 
		return (NULL);

	arr = malloc(sizeof(int) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		arr[i] = min + i;

	return (arr);
}