#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	// Data types
	char a;
	double b;
	float c;
	int d;
	short e;
	unsigned short f;
	long g;
	unsigned long h;
	long int i;
	long long int j;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a short: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a unsigned short: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a unsigned long: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
