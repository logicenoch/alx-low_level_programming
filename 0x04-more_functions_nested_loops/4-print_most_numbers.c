#include "main.h"
/**
*function_name: print_most_numbers - prints numbers
*Description: prints from 0 - 9 excerpt 2 and 4
*/
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		if (c == '2' || c == '4')
			continue;
		_putchar(c);

	_putchar('\n');
}
