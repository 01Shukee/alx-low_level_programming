#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	if (n == 98)
    {
	    printf("98\n");
    }
    else if (n < 98) {
	    for (; n < 98; n++)
	{
		printf("%i, ", n);
	}
	printf("98\n");
    }
    else
    {
	    for (; n > 98; n--)
	{
		printf("%i, ", n);
	}
	printf("98\n");
    }
}

