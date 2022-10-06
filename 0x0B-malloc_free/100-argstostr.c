#include "main.h"
/**
 * *argstostr - concatenates the arguments of the command line
 * @ac: command line arguments count
 * @av: command line arguments
 * Return: concatenated arguments
 */

char *argstostr(int ac, char **av)
{
int i = 0, concat_size = 0, j = 0, cmpt = 0;
char *concat_arg;

if (ac == 0 || av == NULL)
	return (NULL);

for (; i < ac; i++, concat_size++)
	concat_size += strlen(av[i]);

concat_arg = malloc(sizeof(char) * concat_size + 1);

if (concat_arg == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		concat_arg[cmpt] = av[i][j];

	concat_arg[cmpt] = '\n';
	cmpt++;
}
concat_arg[cmpt] = '\0';

return (concat_arg);
}
