#include "main.h"
/**
*function_name: _isdigit - entry point of the test
*Description: Checkes if input is a number
*@c: Character to be tested
*Return: 1 if successful, and 0 if unsuccessful.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
