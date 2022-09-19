#include "main.h"
/**
 *_atoi - converts string to integer
 *Description: takes s as an input and converts it to an integer
 *@s: the input string
 *Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1, resp = 0, counter = 0, counter2;

	for (counter = 0; !(s[counter] >= 48 && s[counter] <= 57); counter++)
		sign *= (s[counter] == '-') ? -1 : 1;
	for (counter2 = counter; s[counter2] >= 48 && s[counter2] <= 57; counter2++)
		resp = resp * 10 + s[counter2] - '0';
	return (sign * resp);
}
