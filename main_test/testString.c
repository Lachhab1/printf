#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0 (Succes)
 */

int main(void)
{
	int len, len2;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	(void) len;
	(void) len2;
	return (0);
}
