#include "main.h"
/**
 * _isalpha - custom function
 * Description: Checks if the input is an alphabet
 * @c: c which is a character input
 * Return: 1 if true, otherwise 0 is returned
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
