#include "main.h"
/**
 * print_alphabet_x10 - custom function
 * Description: Prints alphabets in lowercase 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i = 'a', j = 0;

	while (j < 10)
	{
		while (i <= 'z')
			_putchar(i++);
	i = 'a';
	j++;
	_putchar('\n');
	}
}
