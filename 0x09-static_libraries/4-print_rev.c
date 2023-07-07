#include "main.h"
#include <stddef.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (s[length] != '\0')
			length++;
		for (length = length - 1; length >= 0; length--)
			_putchar(s[length]);
	}
	_putchar('\n');
}
