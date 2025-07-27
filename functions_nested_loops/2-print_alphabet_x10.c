#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Description: This function prints the alphabet in lowercase letters,
 *              ten times, followed by a new line.
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
