#include "main.h"
/**
 * print_integer - print integers numbers
 * @args: input
 * @num: printed arguments
 * Return: int
 */
int print_integer(va_list args, int num)
{
     int zero_value = 0;
	int i = 0, result = 0;
	int number, reverse_number;
	char a;
    va_list args_copy;
    va_copy(args_copy, args);
	
	for (i = 0; i < num; i++)
		(void) va_arg(args_copy, int);
	number = va_arg(args_copy, int);
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
        if(reverse_number == 0)
        {
            zero_value = 1;
        }
		number = number / 10;
        result++;
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
        if (zero_value)
        {
            a= '0';
            write(1, &a, 1);
        }

	}
	va_end(args_copy);
	return (result);
}
