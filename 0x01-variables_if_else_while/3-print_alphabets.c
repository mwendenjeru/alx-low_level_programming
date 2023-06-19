#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * Program prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
