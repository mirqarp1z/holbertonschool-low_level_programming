#include "main.h"
/**
 *  _isdigit - Checks for a digit.
 *
 *  @c: Character to check.
 *
 *  Return - 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 1) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
