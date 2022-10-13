#include "3-calc.h"
/**
 *main - main function of our program.
 *@argc: argument count.
 *@argv: array holding the command line args.
 *Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		print("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	if (!strcmp(argv[2], "%") || !strcmp(argv[2], "/"))
		if (atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
		return (0);
}
