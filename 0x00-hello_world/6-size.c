#include <stdio.h>

/**
 * main - Prints the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0
 */

int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
