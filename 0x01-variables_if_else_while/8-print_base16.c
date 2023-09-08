#include <stdio.h>

/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
        return (0);
}
