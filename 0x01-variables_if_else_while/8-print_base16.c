#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * program that prints all the numbers of base 16 in lowercase
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
