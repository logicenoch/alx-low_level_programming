#include "main.h"
/**
*function_name: _isupper - entry point of the tedt
*Description: Checkes if input is an uppercase
*@c: Character to be tested
*Return: 1 if successful, and 0 if unsuccessful.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
