#include "main.h"
/**
 * printf_char - prints characters
 * @args: input format
 * Return: integer
 */
int printf_char(va_list args)
{
	char str;

	str = va_arg(args, int);

	_putchar(str);
	return (1);
}
