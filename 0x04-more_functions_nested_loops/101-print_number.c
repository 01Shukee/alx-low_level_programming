#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
    unsigned int x;

    x = (n < 0) ? -n : n;

    if (n < 0)
        _putchar('-');

    if (x / 10)
        print_number(x / 10);

    _putchar((x % 10) + '0');
}