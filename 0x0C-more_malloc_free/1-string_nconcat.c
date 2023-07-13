#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to concatenate from s2
 * Return: Pointer to the newly allocated concatenated string
 * If the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, concat_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		concat_len = s1_len + s2_len + 1;
	else
		concat_len = s1_len + n + 1;
	concat = malloc(concat_len);
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strncat(concat, s2, n);
	return (concat);
}
