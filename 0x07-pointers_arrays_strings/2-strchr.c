#include <stddef.h>
#include "main.h"

/**
 * *_strchr - finds the first occurrence of the character c in the string s.
 * @s: the string
 * @c: character to find
 * Return: the first occurrence of @c
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
