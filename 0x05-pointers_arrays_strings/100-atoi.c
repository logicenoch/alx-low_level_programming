#include "main.h"
/**
 *_atoi - converts string to integer
 *Description: takes s as an input and converts it to an integer
 *@s: the input string
 *Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0') * sign;
		else if (result)
			break;
		s++;
	}
	return (result);
}
