#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui = 27;
	
	len = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2= printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);
	return (0);
}
