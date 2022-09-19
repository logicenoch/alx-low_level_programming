#include "main.h"
/**
 *rev_string -  reverses a string
 *Description: Resverses its input
 *@s:input string
 *Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s), index = 0;
	char *s2;
	strcpy(s2, s);

	for (len = strlen(s); len != 0; len--)
		s[index++] = s2[len];
}
