#include "main.h"

/**
*_strdup - returns a pointer to copy of str.
*@str: size of the array
*Return: pointer to the copy of str
*/

char *_strdup(char *str)
{
	int len = strlen(str) + 1, i;
	char *strptr;

	if (str == NULL)
		return (NULL);

	strptr = malloc(len * sizeof(*str));

	if (strptr == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		strptr[i] = str[i];

	return (strptr);
}
