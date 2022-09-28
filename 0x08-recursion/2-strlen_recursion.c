#include "main.h"
/**
 *_strlen_recursion - Prints the length of a string using recursion
 *@s: the string to work with
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
