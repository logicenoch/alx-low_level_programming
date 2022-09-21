#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to upper
 *
 * @str: String to return
 *
 * Return: String
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
