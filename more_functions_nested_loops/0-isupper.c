#include "main.h"
/**
 * int _isupper - checks if the letter is upper.
 *
 * @c: letter.
 *
 * Return - 1 if letter is upper, otherwise 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
