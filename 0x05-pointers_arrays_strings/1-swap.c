#include "main.h"

/**
 * swap_int -> a function to swap the value of two int variable
 *
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
