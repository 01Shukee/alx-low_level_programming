#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be used
 * @y: exponent to be used
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1; // Handle negative exponent as an error or return an appropriate value.
    }
    else if (y == 0)
    {
        return 1; // Anything raised to the power of 0 is 1.
    }
    else
    {
        return x * _pow_recursion(x, y - 1);
    }
}
