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
	int n, i;
	char *hex_rep;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		res++;
		_putchar('0');
		return (res);
	}
	if (num < 1)
		return (-1);
	res = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * res + 1);
	if (hex_rep == NULL)
		return (-1);
	for (res = 0; num > 0; res++)
	{
		n = num % 16;
		if (n > 9)
		{
			n = hex_check(n, 'x');
			hex_rep[res] = n;
		}
		else
			hex_rep[res] = n + 48;
		num = num / 16;
	}
	hex_rep[res] = '\0';
	for (i = res - 1; i >= 0; i--)
		_putchar(hex_rep[i]);
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
	int n, i;
	char *hex_rep;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		res++;
		_putchar('0');
		return (res);
	}
	if (num < 1)
		return (-1);
	res = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * res + 1);
	if (hex_rep == NULL)
		return (-1);
	for (res = 0; num > 0; res++)
	{
		n = num % 16;
		if (n > 9)
		{
			n = hex_check(n, 'X');
			hex_rep[res] = n;
		}
		else
			hex_rep[res] = n + 48;
		num = num / 16;
	}
	hex_rep[res] = '\0';
	for (i = res - 1; i >= 0; i--)
		_putchar(hex_rep[i]);
	free(hex_rep);
	return (res);
}
/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
