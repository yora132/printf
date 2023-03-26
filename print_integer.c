#include "main.h"
/**
 * print_integer - print integers numbers
 * @args: input
 * @num: printed arguments
 * Return: int
 */
int print_integer(va_list args, int num)
{
	int i = 0, result = 0;
	int number, reverse_number;
	char a;

	for (i = 0; i < num; i++)
		(void) va_arg(args, int);
	number = va_arg(args, int);
	if (number == 0)
	{
		a = '0';
		result++;
		write(1, &a, 1);
		i++;
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
		number = number / 10;
		while (number > 0)
		{
			reverse_number = (reverse_number * 10) + (number % 10);
			number /= 10;
			result++;
		}
		while (reverse_number > 0)
		{
			a = reverse_number % 10 + '0';
			write(1, &a, 1);
			reverse_number /= 10;
		}
	}
	return (result);
}
