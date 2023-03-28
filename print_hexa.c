#include "main.h"
/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @args: input
 * Return: output integer
 */
int print_hex(va_list args)
{
	unsigned int num;
	int res = 0;
	int i;
	int *hex_rep;
	unsigned int n = num

	num = va_arg(args, unsigned int);

	while (num / 16 != 0)
	{
		num /= 16;
		res++;
	}
	res++;

	hex_rep = malloc(sizeof(int) * res);

	for (i = 0; i < res; i++)
	{
		hex_rep[i] = n % 16;
		n /= 16;
	}
	for (i = res - 1; i >= 0; i--)
	{
		if (hex_rep[i] > 9)
			hex_rep[i] = hex_rep[i] + 39;
		_putchar(hex_rep[i] + '0');
	}
	free(hex_rep);
	return (res);
}
/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @args: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list args)
{
	unsigned int num;
	int res = 0;
	int i;
	int *hex_rep;
	unsigned int n = num

	num = va_arg(args, unsigned int);

	while (num / 16 != 0)
	{
		num /= 16;
		res++;
	}
	res++;

	hex_rep = malloc(sizeof(int) * res);

	for (i = 0; i < res; i++)
	{
		hex_rep[i] = n % 16;
		n /= 16;
	}
	for (i = res - 1; i >= 0; i--)
	{
		if (hex_rep[i] > 9)
			hex_rep[i] = hex_rep[i] + 7;
		_putchar(hex_rep[i] + '0');
	}
	free(hex_rep);
	return (res);
}
