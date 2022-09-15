#include "main.h"
#include <stdio.h>
/**
*function_name: main - entry point of the program
*Description: Prints the largest prime factor of 612852475143
*Return: 0
*/
int main(void)
{
	long int num = 612852475143, facts, fact, fact_p, larg_p_fact;

	for (facts = 1; facts <= num; facts++)
		if (num % facts)
		{
			fact = facts;
			if (fact % 2 == 0)
			{
				fact_p = fact;
				larg_p_fact = (fact_p > larg_p_fact) ? fact_p : larg_p_fact;
			}
		}
	printf("%ld\n", larg_p_fact);
	return (0);
}
