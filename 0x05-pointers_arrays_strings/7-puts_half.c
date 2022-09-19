#include "main.h"
/**
 *puts_half - prints every other character of a string
 *Description: Skips one
 *@str: input
 *Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str), half;
	
	if (i % 2 != 0)
		half = (len + 1) / 2;
	else
		half = n / 2;

	while (str[half++] != 0)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
