#include "main.h"

/**
*str_concat - Joins two strings together
*@s1: string 1
*@s2: string 2
*Return: pointer to the joined strings
*/

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, concat_len, flag = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + s2_len;

	concat = malloc(concat_len * sizeof(*s1) + 1);

	if (concat == NULL)
		return (NULL);

	for (flag = 0; flag < concat_len; flag++)
	{
		if (flag < s1_len)
			concat[flag] = s1[flag];
		else
			concat[flag] = s2[flag - s1_len];
	}

	concat[flag] = '\0';

	return (concat);
}
