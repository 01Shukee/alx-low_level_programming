#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	if (n>0){
		printf("%d is positive\n", n);
	}
	else if (n==0){
		printf("%d is zero\n", n);
	}
	else{
		printf("%d is negative\n", n);
	}
	return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;

        srand(time(NULL)); // Seed the random number generator

        n = rand() - RAND_MAX / 2; // Generate a random number

        printf("%d ", n);

        if (n > 0) {
                printf("is positive\n");
        }
        else if (n == 0) {
                printf("is zero\n");
        }
        else {
                printf("is negative\n");
        }
        return 0;
}


