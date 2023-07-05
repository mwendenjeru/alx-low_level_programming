#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i;

	if (len <= 1)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	for (i = 0; i < len - 2; i++)
		s[i] = s[i + 1];
	s[len - 2] = '\0';
	return (is_palindrome(s));
}
