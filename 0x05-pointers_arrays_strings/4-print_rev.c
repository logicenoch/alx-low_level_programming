#include "main.h"
/**
 *print_rev - prints the reverse of a string
 *Description: Resverses its input
 *@str:input string
 *Return: void
 */
void print_rev(char *str)
{
	int len = strlen(str);

	while (len-- != 0)
		_putchar(str[len]);
	_putchar('\n');
}
