#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a + 2;

	*(p + 0) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
