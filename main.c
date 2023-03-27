#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
	int len;
 	int len2;
	len = _printf("Let's try to printf a simple sentence%d.\n", 25);
    	len2 = printf("Let's try to printf a simple sentence%d.\n", 25);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n");
	printf("Negative:[%d]\n");
        _printf("Number:[%d]\n", 0);
        printf("Number:[%d]\n", 0);
        _printf("Number:[%d]\n", 2147483647);
        printf("Number:[%d]\n", 2147483647);
        _printf("Number:[%d]\n", - 2147483648);
        printf("Number:[%d]\n", - 2147483648);
        _printf("Number:[%d]\n", 9876543210);
        printf("Number:[%d]\n", 9876543210);
        _printf("Number:[%d]\n", 500);
        printf("Number:[%d]\n", 500);
	_printf("Character:[%c]\n", 'H');
   	printf("Character:[%c]\n", 'H');
   	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
   	len2 = printf("Percent:[%%]\n");
    	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);
	return (0);
}

