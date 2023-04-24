#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0 (Succes)
 */

int main(void)
{
	int len, len2;
	char c = 'K';

	len = _printf("Percent:[%%],%c\n",c);
	len2 = printf("Percent:[%%],%c\n",c);
	printf("%d\n",len);
	printf("%d\n",len2);
	return (0);
}
