#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 97 ; a <= 122 ; a++)
	{
		if (a != 113 && a != 101)
		putchar(a);
	}
	putchar(10);
	return (0);
}
