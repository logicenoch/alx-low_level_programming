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
	unsigned int index = 0;

	while (s[index] >= '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}

	return ('\0');
}
