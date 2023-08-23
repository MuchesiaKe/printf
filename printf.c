#include "main.h"

/**
*_printf- printf implementation
*@format: format specifier string
*Return: bytes of printed characters
**/

int _printf(const char *format, ...)
{
	unsigned int printed;
	va_list specifier;

	if (format == NULL)
		return (0);
	printed = 0;
	va_start(specifier, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed += char_printer(va_arg(specifier, int));
					format++;
					break;
				case 's':
					printed += str_printer(va_arg(specifier, char *));
					format++;
					break;
				case '%':
					_putchar(*format);
					printed++;
					format++;
					break;
				case 'd':
					printed += num_printer(va_arg(specifier, int));
					format++;
					break;
				case 'i':
					printed += num_printer(va_arg(specifier, int));
					format++;
					break;
				case 'u':
					printed += unsigned_printer(va_arg(specifier, int));
					format++;
					break;
				case 'b':
					printed += unsigned_printer(converter(va_arg(specifier, int), 2));
					format++;
					break;
				case 'o':
					printed += unsigned_printer(converter(va_arg(specifier, int), 8));
					format++;
					break;
				case 'x':
					printed += unsigned_printer(converter(va_arg(specifier, int), 16));
					format++;
					break;
				case 'X':
					printed += unsigned_printer(converter(va_arg(specifier, int), 16));
					format++;
					break;
			}
		}

		else
		{
			_putchar(*format);
			printed++;
			format++;
		}
	}
	return (printed);
}
