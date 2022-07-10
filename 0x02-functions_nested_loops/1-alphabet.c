#include "main.h"

/**
 * ptint_alphabet - prints lower case letters followed by new line
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
