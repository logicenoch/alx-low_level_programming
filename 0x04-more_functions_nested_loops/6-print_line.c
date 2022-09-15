#include "main.h"
/**
*function_name: print_line - entry point of the function
*Description: Draws a straight line
*@n: Determines the length of the line
*/
void print_line(int n)
{
	int counter = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter < n)
			_putchar('_');
		_putchar('\n');
	{
}
