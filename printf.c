#include "main.h"

/**
 * _printf - produces function according to format
 * @format: string containing characters and specifiers
 *
 * Return: length of format string 
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		_putchar(format[i]);

		else
		{
			/* i.e. when -> format[i] == % */
			if (format[i+1] == 'c')
				_putchar(va_arg(args, int));
		
		}

		i++;
	}
	va_end(args);

	return (0);

}
