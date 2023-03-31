#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list val;
	int i = 0, m = 0, cont = 0, retcont = 0;
	char arg;
	char *str[1000];
	func_t func[] = {{'%', print_percent}, {'c', print_char}, {'s', print_string},
		{'\0', NULL}
	};

	va_start(val, format);
	*str = va_arg(val, char*);
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] == "%")
		{
			i++;
			m = 0;
			while (func[m].mod)
			{
				if (func[m].mod == *str[i])
				{
					cont += (func[m].f);
				}
			}
			i++;
		}
		write(1, str[i], 1);
		cont++;
	}
}
