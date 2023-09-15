#include <stdio.h>
/**
 *main - largest prime facter of 612852475143.
 *Return: 0
 */
int main(void)
{
	long int x, i, y;

	y = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
        y = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
            y = i;
			x = x / i;
		}
	}
	if (x > 2)
    y = x;
	printf("%ld\n", pf);
	return (0);
}