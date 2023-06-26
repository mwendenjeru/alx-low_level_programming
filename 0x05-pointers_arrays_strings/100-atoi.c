#include "main.h"
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	result *= sign;
	return (result);
}

