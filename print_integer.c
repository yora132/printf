#include "main.h"
/**
 * print_integer - print intger values
 * @args: input
 * Return: integer
 */
int print_integer(va_list args)
{
	int zero_value = 0;
	int result = 0;
	int number, reverse_number;
	char a;

	number = va_arg(args, int);
	if (number == 0)
	{
		a = '0';
		result++;
		_putchar(a);
	}
	else
	{
		if (number < 0)
		{
			a = '-';
			_putchar(a);
			result++;
			number *= -1;
		}
		reverse_number = number % 10;
		if (reverse_number == 0)
			zero_value = 1;
		number /= 10;
		result++;
		while (number > 0)
		{
			reverse_number = (reverse_number * 10) + (number * 10);
			number /= 10;
			result++;
		}
		while (reverse_number > 0)
		{
			a = reverse_number % 10 + '0';
			_putchar(a);
			reverse_number /= 10;
		}
		if (zero_value)
		{
			a = '0';
			_putchar(a);
		}
	}
	return (result);
}
