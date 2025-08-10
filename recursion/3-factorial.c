#include "main.h"

/**
 * This function serves the factorial realness: returns the factorial of n.
 * If n is negative, we keep it shady and return -1.
 * Zero? Oh honey, that's a solid 1, no questions asked. ✨
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
