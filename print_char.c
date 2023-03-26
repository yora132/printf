#include "main.h"
/**
 * print_char - prints characters
 * @args: input format
 * @num: printed arguemnts
 * Return: integer
 */
int print_char(va_list args, int num)
{
	int i, result = 0;
	char str;

	for (i = 0; i < num; i++)
		(void) va_arg(args, int);
	str = va_arg(args, int);
	write(1, &str, 1);
	result++;
	return (result);
}
