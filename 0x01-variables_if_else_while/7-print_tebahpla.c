#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 122 ; a >= 97 ; a--)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}