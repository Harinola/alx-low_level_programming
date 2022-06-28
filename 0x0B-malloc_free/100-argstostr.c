#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: count of the arguments.
 * @av: arguments array.
 *
 * Return: pointer to new string(Success), NULL(Failure).
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k, cnt;

	if (ac == 0 || av == NULL)
		return (NULL);

	cnt = 0;
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cnt++;
		}
	}

	new_str = (char *)malloc(sizeof(char) * (cnt + ac) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac && k < cnt; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}

	new_str[k] = '\0';

	return (new_str);
}
