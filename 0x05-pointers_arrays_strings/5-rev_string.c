#include "main.h"
#include <stddef.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	if (s == NULL)
		return;
	for (i = 0, j = 0; s[j] != '\0'; j++)
		;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
