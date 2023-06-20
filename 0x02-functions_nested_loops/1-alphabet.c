#include <stdio.h>
/**
 * print_alphabet  - Entry point
 * Description - Function to print lower case alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
}
