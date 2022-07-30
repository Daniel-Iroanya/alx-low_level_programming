#include <stdio.h>

/**
 * main -> function to print the argument it receives
 * @argc: number of arguments
 * @argv: array of strings containing arguments passed
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
