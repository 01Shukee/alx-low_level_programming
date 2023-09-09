#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch = 'a';

    // Print lowercase and uppercase alphabets
    while (ch <= 'Z')
    {
        putchar(ch);
        if (ch == 'Z')
            ch = 'a' - 1;  // Reset the character to 'a' - 1 to continue with lowercase
        ch++;
    }

    putchar('\n');  // Print a newline
    return (0);
}
