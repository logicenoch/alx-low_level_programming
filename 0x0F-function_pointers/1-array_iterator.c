#include "function_pointers.h"
/**
 *array_iterator - executes a function passed to it
 *@array: array passed as an arg
 *@size: size of the array
 *@action: pointer to the function to be executed
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter;

	if (action == NULL || array == NULL)
		return;
	for (counter = 0; counter < size; counter++)
	{
		(*action)(array[counter]);
	}
}
