#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	unsigned int ui = 98;
	int len;
	int len2;

	len2 = printf("Unsigned:[%u]\n", ui);
	len = _printf("Unsigned:[%u]\n", ui);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
