#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * Program prints the alphabet in lowercase
 * and then in lower case
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	for (i = 0; i < 26; i++)
		putchar(lowercase);
	lowercase++;
	for (i = 0; i < 26; i++)
		putchar(uppercase);
	uppercase++;
	putchar('\n');
	return (0);
}
