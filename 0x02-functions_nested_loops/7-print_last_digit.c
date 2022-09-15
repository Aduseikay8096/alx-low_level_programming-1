#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 *@n: number being tested
 * Return: Always 0 (Success).
 */

int print_last_digit(int n)
{
	int n;

	n = (m % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}
