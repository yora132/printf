#include "main.h"
/**
 * print_integer - print integers
 * @args: input
 * @num: printed arguments
 * Return: int
 */
int print_integer(va_list args, int num)
{
	int i = 0, result = 0;
	int number;
	char *a;
	int j;

	for (i = 0; i < num; i++)
		(void) va_arg(args, int);
	number = va_arg(args, int);
	if (number == 0)
	{
		a[i++] = '0';
		result++;
		write(1, &a, 1);
	}
	else
	{
		if (number < 0)
		{
			a[i++] = '-';
			write(1, &a[i], 1);
			result++;
			number *= -1;
		}
		while (number > 0)
		{
			a[i++] = number % 10 + '0';
			result++;
			number /= 10;
		}
		for (j = i; j >= 0; j--)
			write(1, &a[j], 1);

	}
	return (result);
}

