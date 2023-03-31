#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list val;
	int i = 0, m = 0;
	int cont = 0;
	char arg;
	char *str[1000];
	func_t func[] = {{'%', print_percent}, {'c', print_char}, {'s', print_string},
		{'\0', NULL}
	};

	va_start(val, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			m = 0;
			while (func[m].mod)
			{
				if (func[m].mod == format[i])
				{
					cont += func[m].f(val);
					break;
				}
				m++;
			}
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			cont++;
			i++;
		}
	}
	va_end(val);
	return (cont);
}
