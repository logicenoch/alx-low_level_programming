#include "main.h"

/**
*_strdup - returns a pointer to copy of str.
*@str: size of the array
*Return: pointer to the copy of str
*/

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, concat_len, flag = 0, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + s2_len + 1;

	concat = malloc(concat_len * sizeof(*s1));

	while (s1 != '\0')
	{
		concat[flag] = s1[flag];
		flag++;
	}

	for (i = flag; i <= concat_len; i++)
		concat[i] = s2[i];

	return (concat);
}
