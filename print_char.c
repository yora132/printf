#include "main.h"
/**
 * print_char - prints characters
 * @args: input format
 * @num: printed arguemnts
 * Return: integer
 */
int print_char(va_list args, int n)
{
	int i, result = 0;
	char str;
    va_list args_copy;
    va_copy(args_copy, args);

	for (i = 0; i < num; i++)
    {
		(void) va_arg(args_copy, int);
    }
	str = va_arg(args_copy, int);
	write(1, &str, 1);
	result++;
    va_end(args_copy);
	return (result);
}
