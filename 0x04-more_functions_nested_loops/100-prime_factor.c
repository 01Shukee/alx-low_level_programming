#include <stdio.h>

/**
 * main - Finds the largest prime factor of 612852475143.
 * Return: Always 0
 */
int main(void)
{
    long int x = 612852475143;
    long int y = -1;

    for (long int z = 2; x > 1; z++)
    {
        while (x % z == 0)
        {
            y = z;
            x /= z;
        }
    }

    printf("%ld\n", y);
    return (0);
}