#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program assigns a random number
 * to variable n each time it is run
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is", n);
	if (n > 0)
		printf(" positive\n");
	else if (n < 0)
		printf(" negative\n");
	else
		printf(" zero\n");
	return (0);
}
