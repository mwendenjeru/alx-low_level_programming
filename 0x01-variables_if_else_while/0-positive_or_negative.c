#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program assigns a random number
 * to variable n each time run
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number %d ", n);

    if (n > 0) {
        printf("is positive.\n");
    } else if (n < 0) {
        printf("is negative.\n");
    } else {
        printf("is zero.\n");
    }
    return(0);
}
