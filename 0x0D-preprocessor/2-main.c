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
	printf("%s\n", __BASE_FILE__);
	return (0);
}
