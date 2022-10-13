#include "function_pointers.h"
/**
 *print_name - prints the name passed to the function.
 *@name: the name passed to the function.
 *@f: a pointer to a function.
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
