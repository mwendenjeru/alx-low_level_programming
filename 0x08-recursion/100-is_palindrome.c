#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_chars - Compares characters recursively for palindrome check
 * @s: The string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if characters match, 0 otherwise
 */
int compare_chars(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (compare_chars(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (compare_chars(s, 0, len - 1));
}
