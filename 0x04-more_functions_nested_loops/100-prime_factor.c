#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: Always 0
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor of the number
 */

int main(void)
{
	long int n;
	long int i;
	long int largest_factor;

	n = 612852475143;
	largest_factor = -1;
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
		       largest_factor = i;
			n = n / i;
		}
	}
	if (n > 2)
		largest_factor = n;
	printf("%ld\n", largest_factor);
	return (0);
}
