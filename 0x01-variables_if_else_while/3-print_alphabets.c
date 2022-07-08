#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int A;
	int a;

	for (A = 65 ; A <= 90 ; A++)
	{
		for (a = 97 ; a <= 122 ; a++)
		putchar(a);
	putchar(A);
	}
	putchar(10);
	return (0);
}
