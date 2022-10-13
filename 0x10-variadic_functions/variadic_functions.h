#ifndef _VARIADIC_FUNTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

void print_all(const char * const format, ...);
char _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
#endif
