#include "main.h"

/**
 * rev_string - reverse String
 * @src: String
 * by Mohammed & badr
 * Return: a pointer to reversed String
 */
char *rev_string(char *src)
{
	int len, t;
	char temp, *res;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	_memcpy(res, src, len);
	for (t = 0; t < len; t++, len--)
	{
		temp = res[len - 1];
		res[len - 1] = res[t];
		res[t] = temp;
	}
	return (res);

}
/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putcar(str[i]);
}
