#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}
	return (length);
}


