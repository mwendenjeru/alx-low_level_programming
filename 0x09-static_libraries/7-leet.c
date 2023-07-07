#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char l[] = "aAeEo0tTlL";
	char leetnums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = leetnums[j];
				break;
			}
		}
	}
	return (str);
}
