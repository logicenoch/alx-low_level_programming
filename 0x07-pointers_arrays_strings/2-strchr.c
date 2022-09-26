#include <stddef.h>
#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{

	while (s++)
	{
		if (*s == c)
		       	return s;
	}

	return ('\0');
}
