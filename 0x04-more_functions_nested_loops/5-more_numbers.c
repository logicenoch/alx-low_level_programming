#include "main.h"
/**
*function_name: more_numbers - prints numbers
*Description: prints from 0 - 14
*/
void more_numbers(void)
{
	int c1 = '0', c2 = '0', i = 0, j = 0;

	while (i < 14)
	{
		while (j < 14)
		{
			_putchar(c1);
			c1++;
			if (j >= 9)
			{
				c1 = '1';
				while (j < 14)
				{
					_putchar(c1 + (c2++));
				}
			}
		}
		_putchar('\n');
	}
}
