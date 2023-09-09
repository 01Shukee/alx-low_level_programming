#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 separated by commas and spaces.
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int c = 0;
	/* your code goes there */
	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
