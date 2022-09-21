#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: 0 if equal, less than 1 or greater than 1
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	return (s1_len - s2_len);
}
