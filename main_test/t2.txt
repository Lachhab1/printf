#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0
 */

int main(void)
{
	int n = 120, len, len2;
	

	len = _printf("%d\n",n);
	len2 = printf("%d\n", n);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
