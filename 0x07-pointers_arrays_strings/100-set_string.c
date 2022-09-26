#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: Double pointer that will take the address of @to
 *
 * @to: a pointer to char
 *
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
