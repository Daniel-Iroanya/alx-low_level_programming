#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (n > 5)
	print("greater than 5")
	if (n == 0)
	printf("Last digit of %d is  %d and is 0", n);
	if (n < 6 && n != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0");
	printf("\n");
	return (0);
}
