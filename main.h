#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
  * struct printf_format - a structure
  *@printf_format: the specific format
  *@f: pointer to function
  */
typedef struct form
{
    char *form;
    int (*f)(va_list);
} form_t;


int _putchar(char c);
int print_s(va_list args);
int print_c(va_list args);
int print_d(va_list args);
int print_p(va_list args);
int _printf(const char *format, ...);
int call_functions(const char *format, form_t specifiers[], va_list args);

#endif
