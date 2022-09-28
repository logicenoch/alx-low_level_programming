/**
 *factorial - calculates the factorial of a given number
 *@n: the operand
 *Return: factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
