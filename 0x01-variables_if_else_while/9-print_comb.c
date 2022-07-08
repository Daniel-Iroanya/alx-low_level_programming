#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int maiain(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch != 57 )
		{
			putchar(44);
			purchar(32);
		}
	}
	putchar(10);
	return (0);	
}
