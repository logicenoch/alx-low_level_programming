#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: Prints all lowercase excerpt 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha != ('z' + 1))
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
