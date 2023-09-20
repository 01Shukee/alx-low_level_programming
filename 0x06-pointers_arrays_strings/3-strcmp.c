#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
    int i, diff;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            diff = s1[i] - s2[i];
            break;
        }
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        diff = 0;

    return diff;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    int result = _strcmp(str1, str2);

    printf("Result: %d\n", result);

    return 0;
}
