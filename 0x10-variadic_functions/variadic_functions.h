#ifndef _VARIADIC_FUNTIONS_H_
#define _VARIADIC_FUNCTIONS_H_



typedef struct pter
{
	char *test;
	void (*printer)();
} pt;

void print_int(va_list arg);

void print_char(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

void print_all(const char * const format, ...);
char _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
#endif
