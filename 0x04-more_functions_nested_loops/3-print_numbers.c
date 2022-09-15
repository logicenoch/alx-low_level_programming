#include "main.h"
/**
*function_name: print_numbers - prints numbers
*Description: prints from 0 - 9
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
