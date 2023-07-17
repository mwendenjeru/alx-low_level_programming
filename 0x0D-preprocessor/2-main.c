#include <stdio.h>

#ifndef FILENAME
#define FILENAME __FILE__
#endif

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	printf("Compiled from file: %s\n", FILENAME);
	return (0);
}
