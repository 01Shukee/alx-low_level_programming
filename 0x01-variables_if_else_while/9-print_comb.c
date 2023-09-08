#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
        putchar('0' + digit); // Print the digit as a character

        if (digit < 9)
        {
            putchar(',');   // Print a comma
            putchar(' ');   // Print a space
        }

        digit++;
    }

    putchar('\n'); // Print a newline character

    return 0;
}

