#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter
 * @str: The string to be duplicated
 * Return: If str is NULL or if memory allocation fails
 * returns NULL
 * Otherwise, returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	return (duplicate);
}
