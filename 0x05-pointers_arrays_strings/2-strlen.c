#include "main.h"
/**
 *_strlen - returns the lenghth of a string
 *Description: takes a string and returns its length
 *@s: the string
 *Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i++] != '\0')

	len = i;
	return (len);
}
