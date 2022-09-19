#include "main.h"
/**
 *puts2 - prints every other character of a string
 *Description: Skips one
 *@str: input
 *Return: void
 */
void puts2(char *str)
{
	int index = 0, len = strlen(str);

	while (index < len)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
