#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * Return: - 1 if character is lowercase, otherwise 0
 * function that checks for lowercase character c 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

