#include "main.h"
/**
 *rev_string -  reverses a string
 *Description: Resverses its input
 *@str:input string
 *Return: void
 */
void rev_string(char *str)
{
	int len = strlen(str), index;
	char s[len] = "";

	for (len = strlen(str), index = 0; len != 0 index < len; len--, index++)
		s[index] = str[len];
}
