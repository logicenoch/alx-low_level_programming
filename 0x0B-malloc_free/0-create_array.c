#include "main.h"

/**
*create_array - creates an array and initializes it with a given value.
*@size: size of the array
*@c: the initailizer.
*Return: pointer to the new array
*/

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	new_array = malloc(sizeof(char) * size);

	if (size == 0 || new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = c;

	return (new_array);
}
