#include <stdio.h>

/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	while(i < 10)
	{
		char digit = '0' + i;
		putchar(digit);
		i++;
	}

	putchar('\n');
	
	return (0);
}
