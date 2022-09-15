#include "main.h"
/**
*function_name: print_diagonal - entry point of the function
*Description: Draws a diagonal line
*@n: Determines the length of the diagonal
*/
void print_diagonal(int n)
{
	int counter = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter < n)
			_putchar('\\');
		_putchar('\n');
	}
}
