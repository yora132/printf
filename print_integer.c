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
	while (num / num_digits > 9)
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
/**
 * print_unsigned - Prints an unsigned number
 * @args: input
 * Return: int
 */
int unsigned_integer(va_list args)
{
	unsigned int num;
	int res = 0;
	int num_digits = 1;
	char a;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		res++;
	}
	if (num < 1)
		return (-1);
	else if (num >= 1)
	{
		while (num / num_digits > 9)
			num_digits *= 10;
		while (num_digits != 0)
		{
			a = (num / num_digits) + '0';
			_putchar(a);
			num %= num_digits;
			num_digits /= 10;
			res++;
		}
	}
	return (res);
}
