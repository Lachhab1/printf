#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/


struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_t;


/* printf function handle types */
int parser(const char *format, convert_t form_list[], va_list arg_list);
int _putcar(char c);
char *rev_string(char *src);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
int hex_check(int num, char x);
char *_memcpy(char *dest, char *src, unsigned int n);
/* function print */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
/* desire end function */
int _printf(const char *format, ...);

#endif
