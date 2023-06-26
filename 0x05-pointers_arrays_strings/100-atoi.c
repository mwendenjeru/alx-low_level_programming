#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';
			int temp = result * 10 + digit;

			if (temp / 10 != result)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = temp;
		}
		else
		{
			break;
		}
	}
	result *= sign;
	return (result);
}

