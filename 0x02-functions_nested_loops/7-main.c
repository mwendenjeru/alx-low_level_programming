#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    _putchar('\n');
    print_last_digit(0);
    _putchar('\n');
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

