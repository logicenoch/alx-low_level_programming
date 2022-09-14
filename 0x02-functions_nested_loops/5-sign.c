#include "main.h"
/**
 * print_sign - custom function
 * Description: Prints the sign of a number
 * @n: contains the test data
 * Return: 1 if true, otherwise 0 is returned
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
