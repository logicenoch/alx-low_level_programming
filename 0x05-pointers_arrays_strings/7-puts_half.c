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

	half = (len % 2 != 0) ? (len + 1) / 2 : len / 2;

	while (str[half] != 0)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
