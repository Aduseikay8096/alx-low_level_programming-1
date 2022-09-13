#include "main.h"

/**
 * main - print alphabets in lowercase
 * 
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
        int alpha;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
                _putchar(alpha * 10);
        }
        _putchar('\n');
}
