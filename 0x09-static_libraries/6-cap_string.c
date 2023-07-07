#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char s[] = " \t\n,;.!?\"(){}";
	int scount = sizeof(s) / sizeof(s[0]);

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; j < scount; j++)
		{
			if (str[i - 1] == s[j] && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		}
	}
return (str);
}
