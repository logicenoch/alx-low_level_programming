#include "main.h"
/**
 * _abs - custom function
 * Description: Returns the absolute value of a number
 * @n: contains the test data
 * Return: abs. value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
