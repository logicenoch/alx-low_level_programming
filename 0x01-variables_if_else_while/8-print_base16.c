#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block or entry point
 * Description - prints all english alphabets in lower case.
 * Return: 0
 */
int main(void)
{
	int alpha = 'a', number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	return (0);
}
