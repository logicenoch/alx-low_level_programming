#include "main.h"
/**
 *_strcpy - copy str1 to str2
 *Description: copy string
 *@dest:copied to here
 *@src:copied from here
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
