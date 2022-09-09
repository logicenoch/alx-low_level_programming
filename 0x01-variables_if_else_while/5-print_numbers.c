#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: Print all numbers
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
		printf("%d", number++);
	putchar('\n');
	return (0);
}
