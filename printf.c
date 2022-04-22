#include "main.h"

/**
 * _printf - printf function
 * @format: string format specifier to str
 *
 * Return: count.
 *
 **/
int _printf(const char *format, ...)
{
	char *s;
	int i, traverse;
	int count = 0;
	va_list arg;

	va_start(arg, format);
	count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (traverse = 0; format[traverse]; traverse++)
	{
		while (format[traverse] != '&' && format[traverse])
		{
			count += _putchar(format[traverse]);
			traverse++;
		}
		if (!(format[traverse]) || (!format[traverse + 1]))
			return (count);
		traverse++;
		switch (format[traverse])
		{
			case 'c':
				i = va_arg(arg, int);
				count += _putchar(i);
				break;
			case 's':
				s = va_arg(arg, char *);
				print_string(s, &count);
				break;
			case '%':
				count += _putchar('%');
				break;
		}
	}
	va_end(arg);
	return (count);
}
