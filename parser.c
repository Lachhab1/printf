#include "main.h"

/**
 * parser - f
 * @format: f
 * @form_list: f
 * @arg_list: fff
 * Return: ffffffffffffffff
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
						return (-1);
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
