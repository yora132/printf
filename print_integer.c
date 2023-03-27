#include "main.h"
/**
 * print_integer - print intger values
 * @args: input
 * Return: integer
 */
int print_integer(va_list args)
{
	int res = 0;
	long int num_digits = 1;
	long int n;
	unsigned int num;
	char a;

	n = va_arg(args, int);
	if (n < 0)
	{
		a = '-';
		_putchar(a);
		res++;
		num = n * -1;
	}
	else
		num = n;
	while (n / num_digits > 9)
		num_digits *= 10;
	while (num_digits != 0)
	{
		a = (num / num_digits) + '0';
		_putchar(a);
		num %= num_digits;
		num_digits /= 10;
		res++;
	}
	return (res);
}
