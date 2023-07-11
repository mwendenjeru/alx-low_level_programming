#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL if ac is 0 or av is NULL,
 * or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j;
	int total_length = 0;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concatenated[index] = av[i][j];
			index++;
			j++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';
	return (concatenated);
}
