#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!validate_input(num1, num2))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
/**
 * multiply - Multiply two positive numbers
 * @num1: First number as a string
 * @num2: Second number as a string
 * Return: Result of multiplication
 */
int multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *res;
	int i, j, carry, product;

	res = calloc(len1 + len2, sizeof(int));
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + res[i + j + 1];
			carry = product / 10;
			res[i + j + 1] = product % 10;
		}
		res[i] += carry;
	}
	i = 0;
	while (res[i] == 0 && i < len1 + len2 - 1)
		i++;
	free(res);
	return (i);
}
/**
 * validate_input - Validate if numbers consist only of digits
 * @num1: First number as a string
 * @num2: Second number as a string
 * Return: 1 if valid, 0 if not
 */
int validate_input(char *num1, char *num2)
{
	int i;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
			return (0);
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
			return (0);
	}
	return (1);
}
