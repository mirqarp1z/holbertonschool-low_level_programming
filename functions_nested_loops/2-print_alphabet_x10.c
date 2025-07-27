#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int d = 1;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	while (d < 11)
	{
		_putchar(alp);
		d++;
	}
}
