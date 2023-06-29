#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: The array to be printed
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    print_array(a, 5);

    reverse_array(a, 5);

    printf("Reversed array: ");
    print_array(a, 5);

    return 0;
}

