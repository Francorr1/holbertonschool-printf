#ifndef _PRINTF
#define _PRINTF

/**libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <stdarg.h>

/**STRUCTURE*/
typedef struct func
{
	char mod;
	int (*f)(va_list mf);
} func_t;

/**Prototypes*/
int _printf(const char *format, ...);
int print_percent(va_list mf);
int print_char(va_list mf);
int print_string(va_list mf);
int print_integer(va_list mf);

#endif
