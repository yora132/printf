#include "main.h"

int main(void)
{
	int len;
    int len2;
    /**************Testing Characters***************************/
	len = _printf("Let's try to printf a simple sentence %c %c.\n", 'w', 'a');
	len2 = printf("Let's try to printf a simple sentence %c %c.\n", 'w', 'a');
	_printf("%d\n");
	printf("%d\n");
    _printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Let's try to printf a simple sentence %s %s.\n", "waled", "wael");
	len2 = printf("Let's try to printf a simple sentence %s %s.\n", "waled", "wael");
    _printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("String:[%s %s]\n", "I am a string !", "Second");
	len2 = printf("String:[%s %s]\n", "I am a string !", "Second");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", 100257);
	printf("Negative:[%d]\n", 100257);
	_printf("Negative:[%d %d %i %i]\n", -76253144, 254844, 1235, 0);
	printf("Negative:[%d %d %i %i]\n", -76253144, 254844, 1235, 0);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

    /**************Testing Percentage***************************/
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
