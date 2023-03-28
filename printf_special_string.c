#include "main.h"
/**
 * printf_special_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_special_string(va_list args)
{
	char *s;
	int i, len = 0;
	int c;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			c = s[i];
			if (c < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(c);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

/**
 * printf_HEX_aux - prints an hexdecimal number.
 * @num: number to print.
 * Return: res
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *hex_rep;
	int res = 0;
	unsigned int n = num;

	while (num / 16 != 0)
	{
		num /= 16;
		res++;
	}
	res++;
	hex_rep = malloc(res * sizeof(int));

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
