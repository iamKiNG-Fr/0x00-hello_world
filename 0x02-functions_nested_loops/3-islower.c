#include <stdio.h>
/**
 * _islower - Entry point
 * Description - Function to print lower case alphabet 10 times
 * @c: this is an ascii character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

