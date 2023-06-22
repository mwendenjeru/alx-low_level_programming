#include <stdio.h>
/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long num __attribute__((unused)))
{
	long max_prime;

	max_prime = -1;
	return max_prime;
}
int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);
	printf("%ld\n", largest_prime);
	return (0);
}
