#include "main.h"
/**
 *print_array - unfolds an array
 *Description: Print the content of an array
 *@a:The array
 *@n:Number of elements of the array to be printed
 *Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
