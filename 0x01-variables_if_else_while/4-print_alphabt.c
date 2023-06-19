#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 *  program that prints the alphabet in lowercase, followed by a new line
 *  Print all the letters except q and e
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{

		if (letter != 'e' && letter != 'q')

		{

			putchar(letter);

		}

		letter++;

	}

	putchar('\n');

	return (0);

}
