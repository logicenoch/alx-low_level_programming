#include "main.h"
/**
 * _islower - custom function
 * Description: Checks if the input is a lower case character
 * @c: c which is a character input
 * Return: 1 if true, otherwise 0 is returned
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
