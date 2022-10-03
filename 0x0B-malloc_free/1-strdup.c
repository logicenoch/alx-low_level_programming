#include "main.h"

/**
*_strdup - returns a pointer to copy of str.
*@str: size of the array
*Return: pointer to the copy of str
*/

char *_strdup(char *str)
{
	int len = strlen(str);
	char *strptr;

	strptr = (char *)malloc(len * sizeof(char));

	if (strptr == NULL || str == NULL)
		return (NULL);

	return (strptr);
}
