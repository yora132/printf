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
	long int number, reverse_number;
	char a;

	number = va_arg(args, long int);
	if (number == 0)
	{
		a = '0';
		result++;
		write(1, &a, 1);
	}
	else
	{
		if (number < 0)
		{
			a = '-';
			write(1, &a, 1);
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
			reverse_number = (reverse_number * 10) + (number % 10);
			number /= 10;
			result++;
		}
		print_postive(reverse_number);
		if (zero_value)
		{
			a = '0';
			write(1, &a, 1);
		}
	}
	return (result);
}
/**
 * print_postive - handles print
 * @num: input
 * Return: void
 */
void print_postive(long int num)
{
	char a;

	while (num > 0)
	{
		a = num % 10 + '0';
		write(1, &a, 1);
		num /= 10;
	}
}
