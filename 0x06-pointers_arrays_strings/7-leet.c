#include "main.h"

/**
 * leet - Encodes a string using 1337
 * @c: String
 * Return: Encoded string
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int index, key_len = sizeof(key) / sizeof(char);

	while (*c)
	{
		for (index = 0; index < key_len; index++)
		{
			if (*c == key[index] || *c == key[index] + 32)
			{
				*c = '0' + value[index];
			}
		}
		c++;
	}

	return (cp);

}
