#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int setir_sayi = 1;
	char herf = 'a';

	while (setir_sayi < 11)
	{
		while (herf <= 'z')
		{
			_putchar(herf);
			herf++;
		}
		setir_sayi++;
	}
}
