#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Return - always 0
 */
int _putchar(char c);
void fizz_buzz(void);
int main(void)
{
	fizz_buzz();
	return (0);
}
int _putchar(char c)
{
	return write(1, &c, 1);
}
void fizz_buzz(void)
{
	int i;
	
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 3 == 0) {
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 5 == 0) {
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else {
			int num = i;
			int digits = 0;

			while (num != 0) {
				num /= 10;
				digits++;
			}
			while (digits > 0) {
				int divisor = 1;
				int j;

				for (j = 1; j < digits; j++)
					divisor *= 10;
				num = i / divisor;
				_putchar(num + '0');
				i %= divisor;
				digits--;
			}
			_putchar(' ');
		}
	}
	_putchar('\n');
}
