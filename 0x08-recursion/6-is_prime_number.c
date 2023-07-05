#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
/**
 * check_prime - Recursive helper function to check if a number is prime
 * @n: The number to check
 * @div: The divisor to check if n is divisible by
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (check_prime(n, div + 1));
}
