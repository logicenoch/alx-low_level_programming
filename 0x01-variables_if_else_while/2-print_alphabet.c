#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block or entry point
 * Description - prints all english alphabets in lower case.
 * Return: 0
 */
int main(void)
{
	char alpha;
	
	alpha = 'a';
	while (alpha != ('z' + 1))
	{
		putchar(alpha++);
	}
	putchar('\n');
	return (0);
}
