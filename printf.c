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
	int i = 0, j = 0;
	char *str = NULL;

	va_start(args, format);

	/* task 0: %, %s, %% */
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		_putchar(format[i]);

		else /* format[i] = % */
		{

			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;

			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				j = 0;

				while (str[j] != '\0')
				{
					_putchar(str[j]);
					j++;
				
				}
			
			}

		}

		i++;
	}
	va_end(args);

	return (0);

}
