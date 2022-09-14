#include "main.h"
/**
 * print_alphabet - main function
 * Description: Prints the string alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar('\n');
}
