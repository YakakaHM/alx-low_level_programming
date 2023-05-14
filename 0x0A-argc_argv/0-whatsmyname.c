#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of argument
 * @argv: array of argument
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n",*argv);

	return (0);
}
