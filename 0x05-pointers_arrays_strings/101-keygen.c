#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generateRandomChar - Generates a random character
 * Return: The generated random character
 */
char generateRandomChar(void)
{
	int randomAscii = rand() % 94 + 33;

	return ((char)randomAscii);
}
/**
 * generateRandomPassword - Generates a random password
 * @password: The buffer to store the generated password
 */
void generateRandomPassword(char *password)
{

	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomChar();
	}
	password[PASSWORD_LENGTH] = '\0';
}
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generateRandomPassword(password);
	printf("%s\n", password);
	return (0);
}
