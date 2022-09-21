#include "main.h"
#include <stdio.h>
/**
 *isLower - Checks if the input is a lowercase character.
 *@c: input character to test.
 *Return: 1 if true, and 0 if false.
 */
int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}


/**
 * isSeparator - checks if the input is a separator
 * @c: input character to test
 * Return: 1 if true, and 0 if false.
 */
int isSeparator(char c)
{
	char *sep = "\t\n,;.!?\"(){}";

	while (*sep)
		if (c == *sep++)
			return (1);

	return (0);
}


/**
 * cap_string - Capitalizes all the words in a string
 * @s: Input string
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int Flag = 1;

	while (*s)
	{
		if (isSeparator(*s))
			Flag = 1;
		else if (isLower(*s) && Flag)
		{
			*s -= ' ';
			Flag = 0;
		} else
			Flag = 0;
		s++;
	}
	return (s);
}
