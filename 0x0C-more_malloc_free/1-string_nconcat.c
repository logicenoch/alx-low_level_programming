#include "main.h"

/**
 *string_nconcat - concatenates two strings.
 *@s1: Destination string
 *@s2: Source string
 *@n: n bytes of s2
 *Return: concaatenated string if successful or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);	
	int i;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	if (n >= str_len)
	{
		final = malloc(sizeof(*final) * (s1_len + s2_len + 1));

		if (final == NULL)
			return NULL;

		for (i = 0; i < (s1_len + s2_len); i++)
		{
			if (i < s1_len)
				final[i] = s1[i];
			else
				final[i] = s2[i];
		}
	}else
	{
		final = malloc(sizeof(*final) * s1_len + n + 1)	
	}

}

