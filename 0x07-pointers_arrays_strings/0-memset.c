#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
for (index = 0; index < n ; index++)
{
	s[index] = b;
}

return (s);
}
