#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main function
 * Description: Last digit comparison
 * return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
		printf("Last digit of %d and is greater than 5", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d and is less than 6 and not 0", n);
	else
		printf("Last digit of %d and is 0", n);
	return (0);
}
