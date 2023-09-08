#include <stdio.h>  // Include the necessary header for putchar

/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';  // Initialize character 'a'

    // Print lowercase alphabet
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }

    ch = 'A';  // Reset the character to 'A'

    // Print uppercase alphabet
    while (ch <= 'Z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');  // Print a newline
    return (0);
}
