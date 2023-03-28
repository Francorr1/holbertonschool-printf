#include "main.h"
/**Include all functions to use from _printf*/

/**
 * print_% - Function that print a percent taking a variable from va_list
 * without using it in the function body due to the unused attribute
 * @mf: va_list that contains the argument of _printf function
 * Return: percent printed
 */

int print_%(__attribute__((unused)) va_list mf)
{
	_putchar('%');
	return (1);
}

/**
 * _putchar_c - function that write the character c to standard output
 * @c: print character
 * Return: number of bytes written to the file
 */

int _putchar_c(char c)
{
	return (write(1, &c, 1));
}
	
/**
 * print_char - Function that print a char
 * @mf: va_list that contains the argument of _printf function
 * Return: char prited
 */

int print_char(va_list mf)
{
	/**print a char that has been retrieved by*/
	/**va_arg function from va_list argument*/
	putchar(va_arg(mf, int));

	/*Return 1 because is the value of a char*/
	return (1);
}

/**
 * print_string - Function that print a string
 * @mf: va_list that contains the argument of _printf function 
 * Return: string printed
 */

int print_string(va_list mf)
{
	int m = 0;
	char *string = va_arg(mf, char *);

	/**check if string is NULL, in this case print "(null)"*/
	if (!string)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	else 
	{
		/**through the string character by character*/
		while (string != NULL && string[m])
		{
			/**print each char, counter variable m is incremented*/
			_putchar(string[m]);
			m++;
		}
	}
	/**return the number of characters printed*/
	return (m);
}
