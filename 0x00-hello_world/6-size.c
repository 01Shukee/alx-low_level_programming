#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always o (Success)
 */


int main(void)
{
	printf("Size of char : %ld byte(s)\n", sizeof(char));
	printf("Size of int : %ld byte(s)\n", sizeof(int));
	printf("Size of a long int : %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int : %ld byte(s)\n", sizeof(long long int));
	printf("Size of float : %ld byte(s)\n", sizeof(float));
	return 0;
}
