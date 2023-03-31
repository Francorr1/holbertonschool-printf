#include "main.h"
/**Include all functions to use from _printf*/

/**
 * print_% - Function that print a percent taking a variable from va_list
 * without using it in the function body due to the unused attribute
 * @mf: va_list that contains the argument of _printf function
 * Return: percent printed
 */

int print_percent(va_list mf)
{
	write(1, "%", 1);
	return (1);
}

/**
 * _putchar_c - function that write the character c to standard output
 * @c: print character
 * Return: number of bytes written to the file
 */
/**
 * print_char - Function that print a char
 * @mf: va_list that contains the argument of _printf function
 * Return: char prited
 */

int print_char(va_list mf)
{
	char ch;

	ch = va_arg(mf, int);
	/**print a char that has been retrieved by*/
	/**va_arg function from va_list argument*/
	write(1, &ch, 1);

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
	char *st = va_arg(mf, char*);

	/**check if string is NULL, in this case print "(null)"*/
	if (mf == NULL)
	{
		write(1, "(", 1);
		write(1, "n", 1);
		write(1, "u", 1);
		write(1, "l", 1);
		write(1, "l", 1);
		write(1, ")", 1);
		return (6);
	}
	else 
	{
		/**through the string character by character*/
		for (m = 0; st[m]; m++)
		{
			/**print each char, counter variable m is incremented*/
			write(1, &st[m], 1);
		}
	}
	/**return the number of characters printed*/
	return (m);
}
