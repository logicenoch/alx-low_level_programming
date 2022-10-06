#include "main.h"
/**
 * main - Houses a program that multiplies through CML
 *@argc: argument count
 *@argv: arrays of arguments
 *Return: 0 if successful, -1 otherwise
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[1]) && atoi(argv[2]))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (num1 * num2);
}
