#include <stdio.h>

/**
 * main - "Prints the size of various types.
 * Description: this is the main function
 * Return; Always 0.
 */

int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("the size of int: %d byte(s)\n", sizeof(int));
	printf("the size of long int: %d byte(s)\n", sizeof(long int));
	printf("the size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("the size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
