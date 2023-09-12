#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;
	_putchar(nv + '0');
	return (nv);
}	
