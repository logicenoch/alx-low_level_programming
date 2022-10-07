#include "main.h"
#include <string.h>

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
	unsigned int s1_len = strlen(s1), s2_len = strlen(s2), final_len;
	unsigned int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s2_len >= n)
		s2_len = n;

	final_len = s1_len + s2_len;
	final = malloc(sizeof(char) * (final_len + 1));

	if (final == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		final[k++] = s1[i];

	for (j = 0; j < s2_len; j++)
		final[k++] = s2[j];

	final[k] = '\0';
	return (final);

}

