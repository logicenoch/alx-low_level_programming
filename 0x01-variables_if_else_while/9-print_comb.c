#include <stdio.h>
/**
 * main - main language.
 * Description: Print all combinations of singles - digits numbers.
 * Return: 0
 */
int main(void)
{
	char numeric_alpha = '0';

	for (numeric_alpha = '0'; numeric_alpha <= '9'; numeric_alpha++)
	{
		if (numeric_alpha == '9')
			putchar(numeric_alpha);
		else
		{
			putchar(numeric_alpha);
		}
		putchar(',');
	}
	putchar('\n');
	return (0);
}

