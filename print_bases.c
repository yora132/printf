#include "main.h"
/**
 * print_binary - prints a number send to this function
 * @args: input argument
 * Return: integer
 */
int print_binary(va_list args)
{
	int res, i;
	unsigned int num;
	char *str;

	num = va_arg(args, unsigned int);
	if (num == 0)
		_putchar('0');
	if (num < 1)
		return (-1);
	res = base_len(num, 2);
	str = malloc(sizeof(char) * res + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num /= 2;
	}
	str[i] = '\0';
	for (i = i - 1; i >= 0; i--)
		_putchar(str[i]);
	free(str);
	return (res);
}
/**
 * base_len - calculates the length of a number
 * @num: the number to calculate its length
 * @base: base to calculate by
 * Return: int
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
		num = num / base;
	return (i);
}
/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @args: List of all the arguments passed to the program
 * Return: integer
 */
int print_octal(va_list args)
{
	unsigned int num;
	int res = 0, i;
	char *octal_rep;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		res++;
		_putchar('0');
	}
	if (num < 1)
		return (-1);
	res = base_len(num, 8);
	octal_rep = malloc(sizeof(char) * res + 1);
	if (octal_rep == NULL)
		return (-1);
	for (res = 0; num > 0; res++)
	{
		octal_rep[res] = (num % 8) + 48;
		num /= 8;
	}
	octal_rep[res] = '\0';
	for (i = res - 1; i >= 0; i--)
		_putchar(octal_rep[i]);
	free(octal_rep);
	return (res);
}
