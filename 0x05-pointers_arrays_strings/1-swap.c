#include "main.h"
/**
 *swap_int - A function that swaps its arguments
 *Description: takes two values and swaps them
 *@a: first param
 *@b: second param
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
