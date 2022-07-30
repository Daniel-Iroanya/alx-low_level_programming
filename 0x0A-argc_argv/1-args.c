#include <stdio.h>

/**
 * main -> function to print number of arguments
 * @argc: number of arguments
 * @argv: stores arguments as strings
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
