#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed tothe program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
