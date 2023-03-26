#include "main.h"
/**
 * print_string - prints a string
 * @args: input format
 * @num: printed arguments
 * Return: int
 */
int print_string(va_list args, int num)
{
	int i, result = 0;
	char *str;
    va_list args_copy;
    va_copy(args_copy, args);
	
	for (i = 0; i < num; i++)
		(void) va_arg(args_copy, int);
	str = va_arg(args_copy, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		result++;
	}
	va_end(args_copy);
	return (result);
}
