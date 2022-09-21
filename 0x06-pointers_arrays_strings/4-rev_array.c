#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An array of integers
 *
 * @n: The number of elements to swap
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	for (start = 0, end = (n - 1); start < end; start++, end--)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
	}
}
