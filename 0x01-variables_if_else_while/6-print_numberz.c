#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 followed by a newline character.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	/* your code goes there */
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
