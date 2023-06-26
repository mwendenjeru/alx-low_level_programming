#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	while (str[length] != '\0')
		length++;
	start_index = length / 2;
	if (length % 2 != 0)
		start_index += 1;
	for (i = start_index; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
