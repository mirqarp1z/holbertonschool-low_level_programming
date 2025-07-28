#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * each followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
    int lines = 1;
    int digit;

    while (lines <= 10)
    {
        digit = 0;
        while (digit <= 14)
        {
            if (digit < 10)
                _putchar(digit + '0');
            else
            {
                _putchar((digit / 10) + '0');
                _putchar((digit % 10) + '0');
            }
            digit++;
        }
        _putchar('\n');
        lines++;
    }
}

