#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 encryption
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		i = 0;
		while (alpha[i])
		{
			if (*ptr == alpha[i])
			{
				*ptr = rot13[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
