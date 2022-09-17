#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	long factors, max_p_fact;
	long num = 612852475143;
	double square = sqrt(num);

	for (factors = 1; factors <= square; factors++)
	{
		if (num % factors == 0)
		{
			max_p_fact = num / factors;
		}
	}

	printf("%ld\n", max_p_fact);

	return (0);
}
