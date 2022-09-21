#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination or output string
 * Return: dest goes out here
 */

char *_strcat(char *dest, char *src)
{
	int a, len = strlen(dest++);

	for (a = 0; dest[len] != '\0'; a++)
	{
		dest[len] = src[a];
		len++
	}

	return (dest);
}
