#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
 * program that prints all possible combinations of single-digit numbers
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
