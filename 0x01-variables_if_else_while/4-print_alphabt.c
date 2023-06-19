#include <stdio.h>
/**
 *  program that prints the alphabet in lowercase, followed by a new line
 *  Print all the letters except q and e
 *  main - entry point
 *  Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
				putchar(letter);
		}
	}
				putchar('\n');
				return (0);
				}
