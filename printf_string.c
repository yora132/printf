#include "main.h"
/**
 * printf_string - prints a string
 * @args: input format
 * Return: len
 */
int printf_string(va_list args)
{
	int len, i;
	char *str;

	str = va_arg(args, char *);

	if (str != NULL)
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}


/**
 * _strlen - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: z.
 */
int _strlen(char *str)
{
	int z;

	for (z = 0; str[z] != 0; z++)
		;
	return (z);

}
