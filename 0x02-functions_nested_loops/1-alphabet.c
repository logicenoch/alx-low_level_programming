#include "main.h"
/**
 * main - main function
 * Description: Prints the string alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar('\n');
	return (0);
}
