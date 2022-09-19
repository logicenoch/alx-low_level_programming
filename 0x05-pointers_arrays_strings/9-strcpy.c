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
	int src_len, dest_len, counter = 0;

	src_len = strlen(src);
	dest_len = strlen(dest);

	while (src[counter] != '\0')
		dest[counter] = src[counter];
	return (dest);
}
