#include "main.h"
/**
 * print_last_digit - custom function
 * Description: Returns the last digit of a number
 * @n: contains the test data
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * (n % 10);
	else
		abs = n % 10;
	_putchar(abs + '0');
	return (abs);
}
