#include <stdio.h>

/**
 * main - "Prints the size of various types.
 * Description: this is the main function
 * Return; Always 0.
 */

int main(void)
{
	int int_type;
	float float_type;
	char char_type;
	long int long_int_type;
	long long int long_long_int_type;

	printf("size of char: %d byte(s)\n", sizeof(char_type));
	printf("the size of int: %d byte(s)\n", sizeof(int_type));
	printf("the size of long int: %d byte(s)\n", sizeof(long_int_type));
	printf("the size of long long int: %d byte(s)\n", sizeof(long_long_int_type));
	printf("the size of float: %d byte(s)\n", sizeof(float_type));

	return (0);
}
