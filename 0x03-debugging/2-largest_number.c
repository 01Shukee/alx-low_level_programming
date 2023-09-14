#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @i: first integer
 * @j: second integer
 * @k: third integer
 * Return: largest number
 */

int largest_number(int i, int j, int k)
{
	int largest;

	largest = (i > j) ? i : j;
	largest = (largest > k) ? largest : k;
	return (largest);
}

