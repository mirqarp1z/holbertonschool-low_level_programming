#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int setir_sayi = 1;
	char herf;

	while (setir_sayi <= 10)
	{
		herf = 'a';
		while (herf <= 'z')
		{
			_putchar(herf);
			herf++;
		}
		_putchar('\n');
		setir_sayi++;
	}
}
