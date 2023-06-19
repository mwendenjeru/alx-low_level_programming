#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * program that prints all possible combinations of two two-digit numbers
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				for (num4 = num3 + 1; num4 <= 9; num4++)
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
					putchar(' ');
					putchar((num3 % 10) + '0');
					putchar((num4 % 10) + '0');
					if (num1 != 9 || num2 != 8 || num3 != 9 || num4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
