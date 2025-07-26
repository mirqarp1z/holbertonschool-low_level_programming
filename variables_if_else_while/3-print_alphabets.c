#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch_low;
	char ch_up;

	ch_low = 'a';

	while (ch_low <= 'z')
	{
		putchar(ch_low);
		ch_low++;
	}
	
	ch_up = 'A';

	while (ch_up <= 'Z')
	{
		putchar(ch_up);
		ch_up++;
	}
	putchar('\n');
	return (0);
}
