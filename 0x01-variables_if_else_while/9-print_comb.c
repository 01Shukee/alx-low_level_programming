#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 separated by commas and spaces.
 * Return: 0 (SUCCESS)
 */
int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
        putchar('0' + digit); // Print the digit as a character

        if (digit < 9)
        {
            putchar(',');
            putchar(' ');
        }

        digit++;
    }

    putchar('\n');

    return (0);
}

