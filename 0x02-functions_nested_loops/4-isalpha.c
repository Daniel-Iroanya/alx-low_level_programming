#include "main.h"

/**
 * _isalpha -> checks for lower or upper case letter.
 *
 * @c: arguement receives character type
 *
 * Return: 1 or 0 based on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
