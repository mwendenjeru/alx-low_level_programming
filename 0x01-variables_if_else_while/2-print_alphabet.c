#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * Program prints the alphabet in lowercase
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
