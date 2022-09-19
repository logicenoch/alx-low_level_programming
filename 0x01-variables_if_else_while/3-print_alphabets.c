#include <stdio.h>
#include <stdlib.h>
/**
 * main - main routine
 * Description: Prints both lowercase and uppercase letters
 * Return: 0
 */
int main(void)
{
	char alpha_lower, alpha_upper;

	alpha_lower = 'a';
	alpha_upper = 'A';
	while (alpha_lower != ('z' + 1))
		putchar(alpha_lower++);
	while (alpha_upper != ('Z' + 1))
		putchar(alpha_upper++);
	putchar('\n');
	return (0);
}
