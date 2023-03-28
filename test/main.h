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

/**Prototypes*/
int _printf(const char *format, ...);
int print_%(va_list mf)
int _putchar_c(char c);
int print_char(va_list mf);
int print_string(va_list mf);

#endif
