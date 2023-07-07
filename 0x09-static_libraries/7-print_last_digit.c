#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
