#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: s a character string. The format string is
 * composed of zero or more directives.
 * Return: integer => the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, char_printed = 1, printed_arguments = 0;

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					char_printed += print_char(args, printed_arguments);
					printed_arguments++;
					break;
				case 's':
					char_printed += print_string(args, printed_arguments);
					printed_arguments++;
					break;
			}
		}
		else if (format[i] == '\n')
		{
			write(STDOUT_FILENO, &format[i], 1);
		}
		else
		{
			write(1, &format[i], 1);
			char_printed++;
		}
	}
	va_end(args);
	return (char_printed);
}
