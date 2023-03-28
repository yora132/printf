#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;



int _printf(const char *format, ...);
int _putchar(char c);
int printf_37(void);
int _strlen(char *str);
int printf_char(va_list args);
int printf_string(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
unsigned int base_len(unsigned int num, int base);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int get_flag(char s, flags_t *f);

#endif
