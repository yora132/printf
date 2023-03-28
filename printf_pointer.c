#include "main.h"

/**
 * printf_pointer - prints an hexdecimal number.
 * @args: arguments.
 * Return: res.
 */
int printf_pointer(va_list args)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}

/**
 * printf_hex_aux - Prints a representation of a decimal number on  lowercase
 * @num: input
 * Return: output integer
 */
int printf_hex_aux(unsigned long int num)
{
	long int res = 0;
	long int i;
	long int *hex_rep;
	unsigned long int n = num;

	while (num / 16 != 0)
	{
		num /= 16;
		res++;
	}
	res++;

	hex_rep = malloc(sizeof(long int) * res);

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
