#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the square matrix
 *
 * Description: Calculates and prints the sum of the main and secondary diagonals
 */

void print_diagsums(int *a, int size)
{
	int cem_esas = 0;
	int cem_ikinci = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		cem_esas += a[i * size + i];
		cem_ikinci += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", cem_esas, cem_ikinci);
}
