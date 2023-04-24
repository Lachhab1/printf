#include "main.h"

/**
 * print_binary - Converts to binary
 * @list: list of binarys
 * Return: binary number length
 */

int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str, *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putcar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		str[i] = (num % 2) ? '1' : '0';
		num /= 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);

	return (len);
}
