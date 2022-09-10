#include <stdlib.h>
#include <time.h>
/* more header enters there */
#include <stdio.h>

/**
 *  main - "program will assign a random number to a varaible.
 *
 *  Return: an integer to signify success of fail
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative". n);
	else
		printf("%d is zero", n);

	printf("\n");

	return (0);
}
