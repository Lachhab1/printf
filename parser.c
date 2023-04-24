#include "main.h"
/**
 * parser - function for calc amount of char printed
 * @format: the string input that contain format
 * @form_list: the list of format
 * @arg_list: the list of args
 * Return: the amount of characters printed
 */
int parser(const char *format, convert_t form_list[], va_list arg_list)
{
	int i, j, r_val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; form_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == form_list[j].sym[0])
				{
					r_val = form_list[j].f(arg_list);
					if (r_val == -1)
					{
						return (-1);
					}
					count += r_val;
					break;
				}
			}
			if (form_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putcar(format[i]);
					_putcar(format[i + 1]);
					count += 2;
				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else
		{
			_putcar(format[i]);
			count++;
		}
	}
	return (count);
}
