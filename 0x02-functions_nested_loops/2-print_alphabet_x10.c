#include "main.h"

/**
 * print_alphabet_x10 ->  prints 10 times the alphabet, lowercase then newline.
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		int j;

		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
