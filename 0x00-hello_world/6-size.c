#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Data types */

        char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
/* Commands used to compile this program for different system architectures: */
/* 64-bit: gcc 6-size.c -m64 -o size64 2> /tmp/64 */
/* 32-bit: gcc 6-size.c -m32 -o size32 2> /tmp/32 */
}
