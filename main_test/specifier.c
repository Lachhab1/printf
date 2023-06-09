#include "main.h"

/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: return the amount of characters printed
 */

int print_char(va_list list)
{
	_putcar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints string to a stdoutput
 * @list: list of chars
 * Return: amount of chars printed
 */


int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putcar(str[i]);
	}
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putcar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of integers
 * Return: amount of charcters printed
 */
int print_integer(va_list list)
{
	int n, t = 1, len = 0;
	unsigned int num;

	n = va_arg(list, int);
	if (n < 0)
	{
		len += _putcar('-');
		num = n * -1;
	}
	else
		num = n;
	while (num / t > 9)
		t *= 10;
	while (t != 0)
	{
		len += _putcar('0' + num / t);
		num %= t;
		t /= 10;
	}
	return (len);
}

/**
 * print_unsigned - print unsigned numbers
 * @list: list of args
 * Return: length of the unsigned number
 */
int print_unsigned(va_list list)
{
	unsigned int num, n;
	int t = 1, len = 0;


	n = va_arg(list, unsigned int);
	num = n;
	while (num / t > 9)
		t *= 10;
	while (t != 0)
	{
		len += _putcar('0' + num / t);
		num %= t;
		t /= 10;
	}
	num = va_arg(list, unsigned int);
	if (n == 0)
		return (len);
	if (n < 1)
		return (-1);
	return (len);
}
