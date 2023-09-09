#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Correct output for a positive n\n");
    }
    else if (n < 0)
    {
        printf("Correct output for a negative n\n");
    }
    else
    {
        printf("Correct output for a zero n\n");
    }

    return (0);
}
}
