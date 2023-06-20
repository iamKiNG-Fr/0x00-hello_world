#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description - Function to print lower case alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
	putchar(10);
	j++;
	}
}

