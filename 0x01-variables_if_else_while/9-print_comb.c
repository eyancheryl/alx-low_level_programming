#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single-digit nums.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

