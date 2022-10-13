include "3-calc.h"

/**
 *op_add - adds a to b.
 *@a: num1.
 *@b: num2.
 *Return: the sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts b from a.
 *@a: num1.
 *@b: num2.
 *Return: the difference between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies a and b.
 *@a: num1.
 *@b: num2.
 *Return: the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides @a with @b
 *@a: dividend.
 *@b: divisor.
 *Return: Quocient of @a and @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calcuates the modules when @a divides @b.
 * @a: dividend
 * @b: divisor
 * Return: remainder when @a divides @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
