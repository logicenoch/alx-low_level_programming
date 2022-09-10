#include <stdio.h>
/**
 * main - main language.
 * Description: Print all combinations of singles - digits numbers.
 * Return: 0
 */
int main(void)
{
	int numeric_alpha, numeric_beta;

	for (numeric_alpha = '0'; numeric_alpha <= '8'; numeric_alpha++)
	{
		for (numeric_beta = '1'; numeric_alpha <= '9'; numeric_beta++)
		{
			putchar(numeric_alpha);
			putchar(numeric_beta);
			if(numeric_alpha != '8' || numeric_beta != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

