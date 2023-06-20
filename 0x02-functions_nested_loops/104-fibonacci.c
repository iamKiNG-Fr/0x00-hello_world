#include <stdio.h>

/**
 * print_fibonacci_numbers - function to print fib numbers
 * main - entry
 * @i: is a count variable
 * Return: Always 0.
 */


void print_fibonacci_numbers(int i)
{
	int fib1 = 1;
	int fib2 = 2;

	printf("%d, %d", fib1, fib2);

	for (int x = 3; x <= count; x++)
	{
		int fib = fib1 + fib2;

		printf(", %d", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");
}

int main(void)
{
	int i = 98;

	print_fibonacci_numbers(i);
	return (0);
}
