#include "3-calc.h"
/**
 *get_op_func - gets the operation type.
 *@s: operation to be performed.
 *Return: index or 0 if failed.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	int index = 0;

	while (index < 5)
	{
		if (strcmp(s, operations[index].op) == 0)
			return (operations[index].f);
		index++;
	}
	return (0);
}
