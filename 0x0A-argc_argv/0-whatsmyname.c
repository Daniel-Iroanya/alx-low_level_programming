#include <stdio.h>

/**
* main -> this is a function to print its name
* @argc: the number of commandline arguments
* @argv: an array of strings containing the arguments
* Return: 0 means successful
*/
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
