#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_all - prints anything
 * @all: arguments
 * @f: pointer to the function that prints all
 */
typedef struct print_all
{
    char all;
    void (*f)(va_list arguments);
} symbol_t;

int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
