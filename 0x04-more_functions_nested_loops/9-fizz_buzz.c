#include <stdio.h>
/**
*function_name: main - entry point of the program
*Description: Prints fizz buzz in place of multiple of 2 and 5
*Return: 0
*/
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if (counter % 5 == 0)
			printf("%s ", "Buzz");
		else if (counter % 3 == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", counter);
	}
	putchar('\n');
}
