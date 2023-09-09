#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char character = 'a';
    int i = 0;

    while (i < 26)
    {
        putchar(character);
        i++;
        character++;
    }

    putchar('\n');
    return (0);
}

