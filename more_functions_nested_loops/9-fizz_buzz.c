#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 with FizzBuzz rules
 *
 * For multiples of 3, prints "Fizz" instead of the number.
 * For multiples of 5, prints "Buzz".
 * For multiples of both 3 and 5, prints "FizzBuzz".
 * Each output is followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num)
		}
		printf(" ");
	}
	printf("\n");
}
